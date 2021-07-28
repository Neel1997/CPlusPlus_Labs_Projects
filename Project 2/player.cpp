#include <iostream>
#include "player.h"
#include <cstdlib>

using namespace std;

Player::Player() {
	this->playerName = ' ';
	this->maxLow = 8;
	this->maxMid = 4;
	this->maxHigh = 2;
	this->health = 100;
}

Player::Player(string playerName) {
	this->playerName = playerName;
	this->maxLow = maxLow;
	this->maxMid = maxMid;
	this->maxHigh = maxHigh;
	this->health = health;
}

void Player::setName(string playerName) {
	this->playerName = playerName;
}

string Player::getName() {
	return playerName;
	
}

int Player::getHealth() {
	return health;
}

void Player::getLow() {
	int attack = 0, low = 0;
	attack = rand() % 20;
	this->health = health - attack;
	maxLow = maxLow - 1;
}

void Player::getMid() {
	int attack = 0, mid = 0;
	attack = rand() % (30 - 10) + 10;
	this->health = health - attack;
	maxMid = maxMid - 1;
}

void Player::getHigh() {
	int attack = 0, high = 0;
	attack = rand() % (40 - 20) + 20;
	this->health = health - attack;
	maxHigh = maxHigh - 1;
}

int Player::showLow() {
	return maxLow;
}

int Player::showMid() {
	return maxMid;
}

int Player::showHigh() {
	return maxHigh;
}

void Player::reset() {
	this->playerName = ' ';
	this->maxLow = 8;
	this->maxMid = 4;
	this->maxHigh = 2;
	this->health = 100;
}