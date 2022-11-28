#pragma once


#include "Function.h"
#include "Event.h"
#include <ctime>
#include <vector>




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
	void travel();

	

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

