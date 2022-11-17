#pragma once

#include "Character.h"
#include "Function.h"
#include <ctime>
#include <vector>
#include <fstream>


class Game
{
public:
	Game();
	virtual ~Game();

	//Operator

	//Function
	void initGame();
	void mainMenu();
	void createNewCharacter();
	void saveCharacters();
	void loadCharacters();

	

	//Accessories
	inline bool getPlaying() const { return this->plaing; }
	//Modifiers
	
private:
	int choice;
	bool plaing;

	//Character related
	int activeCharacter;
	std::vector<Character> characters;
	std::string fileName;
};

