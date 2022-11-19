#include "Inventory.h"

Inventory::Inventory()
{
	this->cap = 10;
	this->nrOfItems = 0;
	this->itemArr = new Item * [this->cap];
}

Inventory::~Inventory()
{
	for (size_t i = 0; i < this->nrOfItems; i++)
	{
		delete this->itemArr[i];
	}
	delete[] this->itemArr; // !!!This is problem!!!
}

void Inventory::expand()
{
	this->cap *= 2;
	Item** tempArr = new Item*[this->cap];
	for (size_t i = 0; i < this->nrOfItems; i++)
	{
		tempArr[i] = this->itemArr[i];
	}
	delete[] this->itemArr;

	this->itemArr = tempArr;

	this->initialize(this->nrOfItems);
}
void Inventory::initialize(const int from)
{
	for (size_t i = from; i < this->cap; i++)
	{
		this->itemArr[i] = nullptr;
	}
}

void Inventory::addItem(const Item& item)
{
	//this->nrOfItems++; // !!!controversial decision!!!
	if (this->nrOfItems >= this->cap)
	{
		this->expand();
	}
	this->itemArr[this->nrOfItems++] = item.clone();
}
void Inventory::removeItem(int index)
{

}