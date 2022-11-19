#include "Item.h"


Item::Item(std::string name, int level, int bayValue, int sellValue, int rarity)
{
	this->name = name;
	this->bayValue = bayValue;
	this->sellValue = sellValue;
	this->level = level;
	this->rarity = rarity;
}

Item::~Item()
{

}