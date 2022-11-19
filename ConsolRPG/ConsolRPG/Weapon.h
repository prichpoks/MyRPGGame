#pragma once

#include"Item.h"

class Weapon:public Item
{
private:
	int damageMin;
	int damageMax;

public:
	Weapon(int damageMin = 0, int damageMax = 0,
		std::string name = "None", int level = 0, int bayValue = 0,
		int sellValue = 0, int rarity = 0);

	virtual ~Weapon();

	//Pur virtual
	virtual Weapon* clone() const;

	//Functions
	std::string toString();


};

