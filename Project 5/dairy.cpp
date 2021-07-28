#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include "dairy.h"

using namespace std;

dairy::dairy() {
	expMonth = 0;
	expDay = 0;
	expYear = 0;
	temp = 0;
}

dairy::dairy(string name, double price, string barCode, string classification, int expMonth, int expDay, int expYear, double temp) {
	item::setName(name);
	item::setPrice(price);
	item::setbarCode(barCode);
	this->expMonth = expMonth;
	this->expDay = expDay;
	this->expYear = expYear;
	this->temp = temp;
}

void dairy::setExp(int expMonth, int expDay, int expYear) {
	this->expMonth = expMonth;
	this->expDay = expDay;
	this->expYear = expYear;
}

void dairy::setTemp(double temp) {
	this->temp = temp;
}

void dairy::display(int i, string classification) {
	item::display(i, classification);
	cout << " Sell by Date: " << expMonth << "-" << expDay << "-" << expYear << endl;
	cout << fixed << setprecision(1);
	cout << " Storage Temperature: " << temp << " Degrees F" << endl;
}