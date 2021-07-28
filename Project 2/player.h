#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <cstdlib>

using namespace std;

class Player {
	private:
		int health;
		string playerName;
		int maxLow;
		int maxMid;
		int maxHigh;
	public:
		Player();
		Player(string);
		void setName(string);
		int getHealth();
		void getLow();
		void getMid();
		void getHigh();		
		string getName();
		int showLow();
		int showMid();
		int showHigh();
		void reset();
};

#endif