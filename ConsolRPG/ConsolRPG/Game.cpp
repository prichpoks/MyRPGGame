
#include "Game.h"

Game::Game()
{
	choice = 0;
	plaing = true;
	activeCharacter = 0;
	fileName = "characters.txt";

}

Game::~Game()
{

}

//Function

void Game::initGame()
{

	createNewCharacter();

}

void Game::mainMenu()
{
	std::cout << "= MAIN MENU =\n" << std::endl;
	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Travel" << std::endl;
	std::cout << "2: Shop" << std::endl;
	std::cout << "3: Level up" << std::endl;
	std::cout << "4: Rest" << std::endl;
	std::cout << "5: Character sheet" << std::endl;
	std::cout << "6: Create new character" << std::endl;
	std::cout << "7: Save characters" << std::endl;
	std::cout << "8: Load characters" << std::endl;

	std::cout << std::endl;
	
	std::cout << std::endl << "Choice: ";
	std::cin >> choice;
	std::cout << std::endl;

	switch (choice)
	{
	case 0:
		plaing = false;
		break;
	case 5:
		characters[activeCharacter].printStats();
		break;
	case 6:
		std::cin.ignore();
		createNewCharacter();
		saveCharacters();
		break;
	case 7:
		saveCharacters();
		break;
	case 8:
		loadCharacters();
		break;
	default:
		break;
	}

}

void Game::createNewCharacter()
{
	std::string name = "";
	std::cout << "Enter name for character: ";
	getline(std::cin, name);

	characters.push_back(Character());
	activeCharacter = characters.size() - 1	;

	characters[activeCharacter].initialize(name);
}

void Game::saveCharacters()
{
	std::ofstream outFile(fileName);

	if (outFile.is_open())
	{
		for (size_t i = 0; i < characters.size(); i++)
		{
			outFile << characters[i].getAsString() << '\n';
		}
	}
	outFile.close();
}
void Game::loadCharacters()
{

}
