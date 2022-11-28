#include "Event.h"


Event::Event()
{
	this->nrIfEvents = 2;
}

Event::~Event()
{

}

void Event::generateEvent(Character &character)
{
	int i = rand() % this->nrIfEvents;

	switch (i)
	{
	case 0:
		//Enemy encounter
		enemyEncouter(character);
		break;
	case 1:
		//Puzzle 
		puzzelEncouter(character);
		break;
	case 2:
		break;
	default:
		break;
	}
}

//Different events
void Event::enemyEncouter(Character& character)
{

}

void Event::puzzelEncouter(Character& character)
{

}