#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include "fruit.h"

using namespace std;

fruit::fruit() {
	expMonth = 0;
	expDay = 0;
	expYear = 0;
}

fruit::fruit(string name, double price, string barCode, string classification, int expMonth, int expDay, int expYear) {
	item::setName(name);
	item::setPrice(price);
	item::setbarCode(barCode);
	this->expMonth = expMonth;
	this->expDay= expDay;
	this->expYear = expYear;
}

void fruit::setExp(int expMonth, int expDay, int expYear) {
	this->expMonth = expMonth;
	this->expDay = expDay;
	this->expYear = expYear;
}

void fruit::display(int i, string classification) {
	item::display(i, classification);
	cout << " Sell by date: " << expMonth << "-" << expDay << "-" << expYear << endl << endl;
}