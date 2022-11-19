#include "Armor.h"


Armor::Armor(int type, int defence, std::string name, int level, int bayValue, int sellValue, int rarity)
	:Item(name, level, bayValue, sellValue, rarity)
{
	this->type = type;
	this->defence = defence;
}

Armor::~Armor()
{

}

Armor* Armor::clone() const
{
	return new Armor(*this);
}

std::string Armor::toString()
{
	std::string str = std::to_string(this->type) + " " + std::to_string(this->defence) + " " + this->getName() + " " + std::to_string(this->getLevel()) + " " + std::to_string(this->getBayValue()) + " " + std::to_string(this->getSellValue()) + " " + std::to_string(this->getRarity());
	return str;
}