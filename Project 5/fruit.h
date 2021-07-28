#ifndef FRUIT_H
#define FRUIT_H
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include "item.h"

using namespace std;

class fruit: public item {
	
	private:
		int expMonth;
		int expDay;
		int expYear;
		
	public:
		fruit();
		fruit(string, double, string, string, int, int, int);
		virtual void setExp(int, int, int);
		void display(int, string);
};

#endif