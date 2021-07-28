#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

class item {
	
	private:
		string name;
		double price;
		string barCode;
		string classification;
	
	public:
		item();
		item(string, double, string, string);
		void setName(string);
		void setPrice(double);
		void setbarCode(string);
		virtual void display(int, string);
};

#endif