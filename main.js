/// <reference path="quintus-all.js" />
/// <reference path="game.js" />

window.addEventListener('load', function (e) {

	var game = newAbductionGame();

	var Q = Quintus({ development: true })
		.include([
			Quintus.Sprites,
			Quintus.Scenes,
			Quintus.Input,
			Quintus.Touch,
			Quintus.UI
		]);
	Q.setup({ width: 960, height: 576 });
	Q.touch(Q.SPRITE_UI);

	Q.scene("start", new Q.Scene(function (stage) {
		var splash = stage.insert(new Q.Sprite({
			asset: 'splash.png',
			x: Q.el.width / 2,
			y: Q.el.height / 2,
			type: Q.SPRITE_NONE
		}));
		var startButton = new Q.Sprite({
			asset: 'start-button.png',
			x: Q.el.width / 4,
			y: Q.el.height / 6,
			type: Q.SPRITE_UI
		});
		startButton.on('touch', function () {
			game = game || newAbductionGame();
			Q.stageScene("starSystem");
		});
		stage.insert(startButton, splash);
	}));

	Q.load(['splash.png', 'start-button.png', 'yellow-star.png', 'planets.png'], function () {
		Q.stageScene("start");
		Q.sheet("planets", "planets.png", { tilew: 150, tileh: 150});
	});

	Q.scene("starSystem", new Q.Scene(function (stage) {
		Q.clearColor = '#111111';

		// Create a sprite for the star in this star system.
		var starSystem = game.starSystems[game.currentStarSystem];
		if (starSystem.star !== 'yellow') throw "Unhandled star type " + starSystem.star;
		stage.insert(new Q.Sprite({
			asset: 'yellow-star.png',
			x: Q.el.width * 1.15,
			y: Q.el.height / 2,
			type: Q.SPRITE_NONE
		}));

		// Create sprites for each planet in this star system.
		for (var i = 0; i < starSystem.planets.length; i++) {
			var planet = starSystem.planets[i];
			stage.insert(new Q.PlanetSprite({ model: planet }));
			//planetSprite.on('touch', function (sprite) {
			//	console.log(sprite.planetIndex);
			//});
		}
	}));

	Q.Sprite.extend("PlanetSprite", (function() {

		var planetTypes = {
			'mercury': { frame: 0, radius: 10 },
			'earth': { frame: 2, radius: 30 },
			'jupiter': { frame: 1, radius: 70 }
		};

		var activeContextMenu = [];

		return {
			init: function (p) {
				var planetType = planetTypes[p.model.type];
				if (typeof planetType === 'undefined') {
					throw "Unhandled planet type " + p.model.type;
				}
				var r = planetType.radius;
				this._super(p, {
					sheet: 'planets',
					frame: planetType.frame,
					x: Q.el.width * p.model.x,
					y: Q.el.height / 2,
					points: [[-r, -r], [r, -r], [r, r], [-r, r]],
					type: Q.SPRITE_UI
				});
				this.on('touch');
			},
			touch: function (touch) {
				while (activeContextMenu.length > 0) {
					activeContextMenu.pop().destroy();
				}
				activeContextMenu.push(this.stage.insert(new Q.UI.Container({
					fill: 'gray',
					border: 5,
					shadow: 10,
					shadowColor: 'rgba(0,0,0,0.5)',
					y: this.p.y + this.p.cy,
					x: this.p.x,
				})));
				activeContextMenu.push(this.stage.insert(new Q.UI.Text({
					label: this.p.model.type,
					color: 'white',
					x: 0, y: 0
				}), activeContextMenu[0]));
				activeContextMenu.push(this.stage.insert(new Q.UI.Button({
					label: 'Orbit',
					x: 0, y: 50,
					fill: '#990000',
					border: 5,
					shadow: 10,
					shadowColor: 'rgba(0,0,0,0.5)'
				}, function () {
					console.log('btn!');
				}), activeContextMenu[0]));
				activeContextMenu[0].fit(20, 20);
				console.log([this, touch]);
			}
		};

	})());



	/*
	// Touch events do most of the work for us, but the
	// touch system doesn't handle mousemouse events, so lets add
	// in an event listener and use `Stage.locate` to highlight
	// sprites on desktop.
	Q.el.addEventListener('mousemove', function (e) {
		var x = e.offsetX || e.layerX,
			y = e.offsetY || e.layerY,
			stage = Q.stage();

		// Use the helper methods from the Input Module on Q to
		// translate from canvas to stage
		var stageX = Q.canvasToStageX(x, stage),
			stageY = Q.canvasToStageY(y, stage);

		// Find the first object at that position on the stage
		var obj = stage.locate(stageX, stageY);


		// Set a `hit` property so the step method for the 
		// sprite can handle scale appropriately
		if (currentObj) { currentObj.p.over = false; }
		if (obj) {
			currentObj = obj;
			obj.p.over = true;
		}
	});
	*/
});
