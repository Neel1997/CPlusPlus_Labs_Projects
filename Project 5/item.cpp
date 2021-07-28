#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include <iomanip>
#include "item.h"

using namespace std;

item::item() {
	name = ' ';
	price = 0;
	barCode = ' ';
	classification = ' ';
}

item::item(string name, double price, string barCode, string classification) {
	this->name = name;
	this->price = price;
	this->barCode = barCode;
	this->classification = classification;
}

void item::setName(string name) {
	this->name = name;
}

void item::setPrice(double price) {
	this->price = price;
}

void item::setbarCode(string barCode) {
	this->barCode = barCode;
}

void item::display(int i, string classification) {
	cout << fixed << setprecision(2);
	cout << i << ". - " << name << ": " << classification << endl;
	cout << " Price - $" << price << endl;
	cout << " GS1   - " << barCode;
	cout << endl;
}