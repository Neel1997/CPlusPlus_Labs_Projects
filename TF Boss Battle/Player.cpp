#include "Player.h"
#include <cstdlib>

using namespace std;

Player::Player()
{
	this->health = 100;
	this->lowAtkMax = 8;
	this->medAtkMax = 4;
	this->hiAtkMax = 2;
	this->name = " ";
}

Player::Player(string name)
{
	this->health = health;
	this->lowAtkMax = lowAtkMax;
	this->medAtkMax = medAtkMax;
	this->hiAtkMax = hiAtkMax;
	this->name = name;
}

int Player::lowAtk()
{
	//srand(42);
	int lowAtk = 0;
	int damage = 0;
	lowAtk = this->lowAtkMax;
	if(lowAtk > 0)
	{
		damage = rand() % 21;
		lowAtk--;
	}
	this->lowAtkMax = lowAtk;
	return damage;
}

int Player::medAtk()
{
	//srand(42);
	int medAtk = 0;
	int damage = 0;
	medAtk = this->medAtkMax;
	if(medAtk > 0)
	{
		damage = rand() % 20 + 10;
		medAtk--;
	}
	this->medAtkMax = medAtk;
	return damage;
}

int Player::hiAtk()
{
	//srand(42);
	int hiAtk = 0;
	int damage = 0;
	hiAtk = this->hiAtkMax;
	if(hiAtk > 0)
	{
		damage = rand() % 20 + 20;
		hiAtk--;
	}
	this->hiAtkMax = hiAtk;
	return damage;
}

void Player::reset()
{
	this->health = 100;
	this->lowAtkMax = 8;
	this->medAtkMax = 4;
	this->hiAtkMax = 2;	
}

void Player::setName(string name)
{
	this->name = name;
}

int Player::dispLow()
{
	return lowAtkMax;
}

int Player::dispMed()
{
	return medAtkMax;
}

int Player::dispHi()
{
	return hiAtkMax;
}

int Player::dispHealth()
{
	return health;
}

void Player::Damage(int damage)
{
	int health = 100;
	health = this->health;
	health = health - damage;
	this->health = health;
	
}

string Player::dispName()
{
	return name;
}