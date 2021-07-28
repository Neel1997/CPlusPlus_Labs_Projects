/****************************************************************************
* Project number: 3
*
* Programmer: Neel Patel
*
* Submission Date: October 11, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Grocery Shopping
*
*
***************************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "grocery.h"

using namespace std;

int main() {
	Grocery shopping_List;
	Grocery shopping_Cart;
	double budget = 50.00;
	shopping_List.push("Gallon of Milk", 6.99);
	shopping_List.push("Dozen Eggs", 5.69);
	shopping_List.push("Peanut Butter", 4.99);
	shopping_List.push("Chicken Strips", 6.79);
	shopping_List.push("Ice Cream", 4.00);
	shopping_List.push("Cereal", 3.98);
	shopping_List.push("3 lbs of Apples", 4.11);
	shopping_List.push("Gift Card", 10.00);
	shopping_List.push("10 Pack of Socks", 19.78);
	shopping_List.push("48 Count AA Batteries", 14.49);
	
	cout << endl << "List: Shopping" << endl;
	cout << shopping_List;
	cout << endl << "...Shopping..." << endl;
	
	while (budget > 0 && budget >= shopping_List.priceofItem()) {
		shopping_Cart(shopping_List.nameofItem(), shopping_List.priceofItem());
		budget = budget - shopping_List.priceofItem();
		shopping_List.pop();
	}
	
	cout << endl << "List: Shopping" << endl;
	cout << shopping_List;
	cout << endl;
	cout << "List: Cart" << endl;
	cout << shopping_Cart;
	
	return 0;
}