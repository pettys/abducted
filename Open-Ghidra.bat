@echo off
set "JAVA_HOME=C:\code\lightspeed\tools\jdk-25.0.4.1+1"
set "PATH=%JAVA_HOME%\bin;%PATH%"
call "C:\code\lightspeed\tools\ghidra_12.2_PUBLIC\ghidraRun.bat" "C:\code\lightspeed\analysis\projects\LightspeedMapped.gpr"