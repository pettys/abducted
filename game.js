function newAbductionGame() {

	var ship = {
		fuel: 100,
		hull: 100
	};

	var game = {
		ship: ship,
		starSystems: [],
		currentStarSystem: 0
	};

	game.starSystems[0] = {
		star: 'yellow',
		planets: [
			{ type: 'mercury', x: .7 },
			{ type: 'earth', x: .57 },
			{ type: 'jupiter', x: .15 }
		]
	};

	return game;
}