#ifndef GROCERY_H
#define GROCERY_H
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Grocery {
	private:
		struct item {
			string name;
			double price;
			item *next;
		}newItem;
		
		string list;
		item *top;
		int size;
		double total;
		
	public:
		Grocery();
		~Grocery();
		int getSize();
		string nameofList();
		string nameofItem();
		double priceofItem();
		void push(string, double);
		void pop();
		void operator()(string, double);
		void display(ostream&);
		friend ostream& operator<<(ostream&, Grocery&);
};

#endif