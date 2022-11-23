#include "Enemy.h"

Enemy::Enemy(int level)
{
	this->level = level;
	this->hpMax = this->level * 10;
	this->hp = this->hpMax;
	this->damageMin = this->level * 4;
	this->damageMax = this->level * 5;
	this->dropChance = rand() % 100;
	this->defence = rand() % 100;
	this->accuracy = rand() % 100;
}

Enemy::~Enemy()
{


}

std::string Enemy::getAsString()const
{
	return "Level: " + std::to_string(this->level) + "\n" +
		"HP: " + std::to_string(this->hp) + " / " + std::to_string(this->hpMax) + "\n" +
		"Damage: " + std::to_string(this->damageMin) + " - " + std::to_string(this->damageMax) + "\n" +
		"Defence: " + std::to_string(this->defence) + "\n" +
		"Accurcy: " + std::to_string(this->accuracy) + "\n" +
		"Drop chance: " + std::to_string(this->dropChance) + "\n";
}
