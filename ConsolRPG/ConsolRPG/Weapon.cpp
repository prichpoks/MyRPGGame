#include "Weapon.h"

Weapon::Weapon(int damageMin, int damageMax, std::string name, int level, int bayValue, int sellValue, int rarity) 
	:Item(name, level, bayValue, sellValue, rarity)
{
	this->damageMin = damageMin;
	this->damageMax = damageMax;
}

Weapon::~Weapon()
{

}

Weapon* Weapon::clone()const
{
	return new Weapon(*this);
}

std::string Weapon::toString()
{
	std::string str = std::to_string(this->damageMin) + " " + std::to_string(this->damageMax) + " " + this->getName() + " " + std::to_string(this->getLevel()) + " " + std::to_string(this->getBayValue()) + " " + std::to_string(this->getSellValue()) + " " + std::to_string(this->getRarity());
	return str;
}
