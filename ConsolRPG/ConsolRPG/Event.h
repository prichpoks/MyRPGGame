#pragma once

#include "Character.h"
#include"Puzzel.h"
#include<stdlib.h>


class Event
{
private:
	int nrIfEvents;

public:
	Event();
	virtual ~Event();
	void generateEvent(Character &character);

	//Events
	void enemyEncouter(Character& character);
	void puzzelEncouter(Character& character);
};

