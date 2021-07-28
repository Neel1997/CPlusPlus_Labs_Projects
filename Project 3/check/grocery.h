#ifndef GROCERY_H
#define GROCERY_H

#include <string.h>
#include <iostream>
#include <cstdlib>

using namespace std;

class Grocery{
private:
	string name;
	struct node{
		string itemName;
		double price;
		node* next;
	};
    node* top;
	double total;
	int size;

public:
	Grocery();
	~Grocery();
	int getSize();
    double getTotal();
    string getName();
    string getTop();
    double getPrice();
    void setName(string list);
    void pop();
	void push(string,double);
    void operator()(string ,double);
	friend ostream& operator<<(ostream&, Grocery&);
    
};

#endif
