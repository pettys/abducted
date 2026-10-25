$ErrorActionPreference = 'Stop'
$taskRoot = Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$ghidra = Join-Path $taskRoot 'tools\ghidra_12.2_PUBLIC'
$env:JAVA_HOME = (Get-ChildItem (Join-Path $taskRoot 'tools') -Directory -Filter 'jdk-25*' | Select-Object -First 1).FullName
$env:Path = "$env:JAVA_HOME\bin;$env:Path"
$language = Join-Path $ghidra 'Ghidra\Processors\x86\data\languages'
Copy-Item -LiteralPath (Join-Path $taskRoot 'analysis\language\ia-lightspeed.sinc'),(Join-Path $taskRoot 'analysis\language\x86-lightspeed.slaspec'),(Join-Path $taskRoot 'analysis\language\lightspeed.ldefs') -Destination $language -Force
& (Join-Path $ghidra 'support\sleigh.bat') (Join-Path $language 'x86-lightspeed.slaspec')
if ($LASTEXITCODE -ne 0) { throw 'Language compilation failed' }
python (Join-Path $PSScriptRoot 'extract_map.py')
if ($LASTEXITCODE -ne 0) { throw 'Overlay validation failed' }
$headless = Join-Path $ghidra 'support\analyzeHeadless.bat'
$projects = Join-Path $taskRoot 'analysis\projects'
& $headless $projects LightspeedMapped -import (Join-Path $taskRoot 'exe\Lightspe\LIGHTSPD.EXE') -overwrite -processor 'x86:LE:16:Lightspeed' -noanalysis -scriptPath $PSScriptRoot -postScript MapLightspeed.java $taskRoot -postScript FinishMap.java $taskRoot -log (Join-Path $taskRoot 'analysis\rebuild-main.log')
if ($LASTEXITCODE -ne 0) { throw 'Main mapping failed' }
$executables = Get-ChildItem (Join-Path $taskRoot 'exe\Lightspe') -Filter '*.EXE' | Where-Object Name -ne 'LIGHTSPD.EXE' | ForEach-Object FullName
& $headless $projects LightspeedSupport -import @executables -overwrite -processor 'x86:LE:16:Lightspeed' -noanalysis -scriptPath $PSScriptRoot -postScript SupportMap.java $taskRoot -log (Join-Path $taskRoot 'analysis\rebuild-support.log')
if ($LASTEXITCODE -ne 0) { throw 'Support mapping failed' }
& $headless $projects LightspeedSupport -import (Join-Path $taskRoot 'exe\Lightspe\MPS_DISK.COM') (Join-Path $taskRoot 'exe\Lightspe\MPS_FILE.COM') -overwrite -loader BinaryLoader -loader-baseAddr '1000:0100' -processor 'x86:LE:16:Lightspeed' -noanalysis -scriptPath $PSScriptRoot -postScript SupportMap.java $taskRoot -log (Join-Path $taskRoot 'analysis\rebuild-com.log')
if ($LASTEXITCODE -ne 0) { throw 'COM mapping failed' }
python (Join-Path $PSScriptRoot 'build_report.py')
if ($LASTEXITCODE -ne 0) { throw 'Report validation failed' }