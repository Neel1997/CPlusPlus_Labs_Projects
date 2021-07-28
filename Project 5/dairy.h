#ifndef DAIRY_H
#define DAIRY_H
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include "item.h"

using namespace std;

class dairy: public item {
	
	private:
		int expMonth;
		int expDay;
		int expYear;
		double temp;
		
	public:
		dairy();
		dairy(string, double, string, string, int, int, int, double);
		void setExp(int, int, int);
		void setTemp(double);
		void display(int, string);
};

#endif