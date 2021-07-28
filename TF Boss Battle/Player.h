#ifndef PLAYER_H
#define PLAYER_H
#include <cstdlib>
#include <iostream>

using namespace std;


class Player
{
	private:
		int health;
		int lowAtkMax;
		int medAtkMax;
		int hiAtkMax;
		string name;
	public:
		int lowAtk();
		int medAtk();
		int hiAtk();
		int dispLow();
		int dispMed();
		int dispHi();
		void setName(string);
		string dispName();
		void Damage(int);
		Player();
		Player(string);
		void reset();
		int dispHealth();
};


#endif