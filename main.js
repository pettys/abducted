﻿/// <reference path="quintus-all.js" />
/// <reference path="game.js" />

window.addEventListener('load', function (e) {

	var game = window.game = newAbductionGame();

	game.on('arrivedAtStarSystem', function (args) {
		Q.stageScene("starSystem", 0, args);
	});

	var shownPlanetSprites = [];

	var Q = Quintus({ development: true })
		.include([
			Quintus.Sprites,
			Quintus.Scenes,
			Quintus.Input,
			Quintus.Touch,
			Quintus.UI,
			Quintus.Anim
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
		startButton.on('touch', function () { game.start(); });
		stage.insert(startButton, splash);
	}));

	Q.load(['splash.png', 'start-button.png', 'yellow-star.png', 'planets.png', 'crosshairs.png'], function () {
		Q.stageScene("start");
		Q.sheet("planets", "planets.png", { tilew: 150, tileh: 150});
	});

	Q.scene("starSystem", new Q.Scene(function (stage) {
		Q.clearColor = '#111111';

		// Create a sprite for the star in this star system.
		var starSystem = stage.options.starSystem;
		if (starSystem.star !== 'yellow') throw "Unhandled star type " + starSystem.star;
		stage.insert(new Q.Sprite({
			asset: 'yellow-star.png',
			x: Q.el.width * 1.15,
			y: Q.el.height / 2,
			type: Q.SPRITE_NONE
		}));

		// Create sprites for each planet in this star system.
		shownPlanetSprites = [];
		for (var i = 0; i < starSystem.planets.length; i++) {
			var planet = starSystem.planets[i];
			var sprite = new Q.PlanetSprite({ model: planet });
			stage.insert(sprite);
			shownPlanetSprites.push(sprite);
		}
		
		var mark = new Q.LocationMarker({
			currentPlanet: starSystem.planets[stage.options.planetIndex]
		});
		stage.insert(mark);
		mark.add("tween");
	}));

	Q.Sprite.extend("LocationMarker", {
		init: function (p) {
			this._super(p, {
				asset: 'crosshairs.png',
				type: Q.SPRITE_NONE
			});
			console.log(this);
		},
		step: function (dt) {
			this.p.angle += dt * 50;
			if (this.targetPlanet === this.p.currentPlanet) {
				return;
			}
			this.targetPlanet = this.p.currentPlanet;
			//var markSprite = shownPlanetSprites[this.p.currentPlanet];
			var targetX = this.p.currentPlanet.x * Q.el.width;
			//var targetScale =  1.1 * markSprite.p.r / this.p.cx;
			this.p.y = Q.el.height / 2;
			if (!this.started) {
				this.p.x = targetX;
				//this.p.scale = targetScale;
				this.started = true;
			} else {
				var time = Math.abs(this.p.x - targetX) / 140;
				this.stop();
				this.animate({ x: targetX/*, scale: targetScale*/ }, time, Q.Easing.Quadratic.InOut);
			}
		}
	});

	Q.Sprite.extend("PlanetSprite", (function() {

		var planetTypes = {
			'mercury': { frame: 0, radius: 10 },
			'earth': { frame: 2, radius: 30 },
			'jupiter': { frame: 1, radius: 70 }
		};

		var activeContextMenu = [];

		function killContextMenu() {
			while (activeContextMenu.length > 0) {
				activeContextMenu.pop().destroy();
			}
		}

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
					r: r,
					points: [[-r, -r], [r, -r], [r, r], [-r, r]],
					type: Q.SPRITE_UI
				});
				this.on('touch');
			},
			touch: function (touch) { game.touchPlanet(this.p.model); }
				//var self = this;
				//killContextMenu();
				//activeContextMenu.push(this.stage.insert(new Q.UI.Container({
				//	fill: 'gray',
				//	border: 5,
				//	shadow: 10,
				//	shadowColor: 'rgba(0,0,0,0.5)',
				//	y: this.p.y + this.p.cy,
				//	x: this.p.x,
				//})));
				//activeContextMenu.push(this.stage.insert(new Q.UI.Text({
				//	label: this.p.model.type,
				//	color: 'white',
				//	x: 0, y: 0
				//}), activeContextMenu[0]));
				//activeContextMenu.push(this.stage.insert(new Q.UI.Button({
				//	label: 'Orbit',
				//	x: 0, y: 50,
				//	fill: '#990000',
				//	border: 5,
				//	shadow: 10,
				//	shadowColor: 'rgba(0,0,0,0.5)'
				//}, function () {
				//	var index = game.starSystems[game.currentStarSystem].planets.indexOf(self.p.model);
				//	game.currentPlanet = index;
				//	killContextMenu();
				//}), activeContextMenu[0]));
				//activeContextMenu[0].fit(20, 20);
				//}
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
