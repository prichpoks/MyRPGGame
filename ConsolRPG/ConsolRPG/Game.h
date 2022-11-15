#pragma once

#include "Character.h"
#include <ctime>
#include "Function.h"

class Game
{
public:
	Game();
	virtual ~Game();

	//Operator

	//Function
	void initGame();
	void mainMenu();

	//Accessories
	inline bool getPlaying() const { return this->plaing; }
	//Modifiers
	
private:
	int choice;
	bool plaing;

	//Character related
	Character character;
};

