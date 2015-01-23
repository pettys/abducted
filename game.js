function newAbductionGame() {

	var state = {
		ship: {
			fuel: 100,
			hull: 100
		},
		starSystems: [],
		currentStarSystem: 0,
		currentPlanet: 1
	};

	state.starSystems[0] = {
		star: 'yellow',
		planets: [
			{ type: 'mercury', x: .7 },
			{ type: 'earth', x: .57 },
			{ type: 'jupiter', x: .15 }
		]
	};

	var game = {};
	var eventHandlers = {};
	var raise = function (eventName, args) {
		console.log(['raising ' + eventName, args]);
		var handlers = eventHandlers[eventName];
		if (typeof (handlers) === 'undefined') {
			console.log('no handlers for ' + eventName);
		} else {
			handlers.forEach(function (h) { h(args); });
		}
	};

	game.on = function (eventName, callback) {
		eventHandlers[eventName] = eventHandlers[eventName] || [];
		eventHandlers[eventName].push(callback);
	};

	game.start = function () {
		raise('arrivedAtStarSystem', {
			starSystem: state.starSystems[state.currentStarSystem],
			planetIndex: state.currentPlanet
		});
	};

	game.touchPlanet = function (planet) {
		console.log(planet);
		console.log(state.starSystems[state.currentStarSystem].planets.indexOf(planet));
	};

	return game;
}