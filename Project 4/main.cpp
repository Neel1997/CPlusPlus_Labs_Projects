/****************************************************************************
* Project number: 4
*
* Programmer: Neel Patel
*
* Submission Date: October 28, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Vending Machine
*
*
***************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ios>
#include <stdio.h>
#include <string>
#include <iomanip>
#include "vendingmachine.h"

int main() {
	coins wallet;
	wallet.dollars = 2;
	wallet.quarters = 5;
	wallet.dimes = 2;
	wallet.nickels = 1;
	
	enum state {
		getMoney,
		displayPrice,
		Vend,
		e_state
	};
	
	VendingMachine v;
	state current = getMoney;
	int choice;
	while (current != e_state) {
		switch (current) {
			
			case getMoney:
				cout << endl << endl << "You have: " << endl;
				cout << "Dollars : " << wallet.dollars << endl;
				cout << "Quarters: " << wallet.quarters << endl;
				cout << "Dimes   : " << wallet.dimes << endl;
				cout << "Nickels : " << wallet.nickels << endl;
				cout << v;
				cout << "Input - $" << v.getUserCoin() << endl << endl;
				cout << "Choice: ";
				cin >> choice;
				do {
					fflush(stdin);
					cin.clear();
					if (!cin.good() || (choice > 10 || choice < 0)) {
						cout << "Bad choice" << endl;
						cout << "Choice: ";
						cin >> choice;
					}
				}while(!cin.good() || (choice > 10 || choice < 0));
				
				if ((choice >= 1 && choice <= 6) && (v.getUserCoin() >= v.getItemPrice(choice))) {
					current = Vend;
				}
				else if ((choice >= 1 && choice <= 6) && (v.getUserCoin() < v.getItemPrice(choice))) {
					current = displayPrice;
				}
				
				else if (choice >= 7 && choice <= 10) {
					if (choice == 7 && wallet.dollars > 0) {
						v.receiveDollar();
						wallet.dollars--;
					}
					else if (choice == 8 && wallet.quarters > 0) {
						v.receiveQuarter();
						wallet.quarters--;
					}
					else if (choice == 9 && wallet.dimes > 0) {
						v.receiveDime();
						wallet.dimes--;
					}
					else if (choice == 10 && wallet.nickels > 0) {
						v.receiveNickel();
						wallet.nickels--;
					}
				}
				
				else if (choice == 0) {
					current = e_state;
				}
				
				break;
				
				
			case displayPrice:
				if (v.getItemStock(choice) > 0) {
					cout << endl << endl << "Item and Price: " << v.getItemName(choice) << " - $" << v.getItemPrice(choice) << endl;
				}
				else {
					cout << "SOLD OUT" << endl;
				}
				current = getMoney;
				break;
				
				
			case Vend:
				if (v.getItemStock(choice) > 0) {
					v.change(wallet, v.getItemPrice(choice));
					v.vendItem(choice);
					cout << "VENDING ITEM..... " << endl << "ITEM VENDED: " << v.getItemName(choice) << endl;
					current = getMoney;
				}
				break;
				
		}
	}
	v.refund(wallet);
	cout << endl << "You have: " << endl;
	cout << "Dollars : " << wallet.dollars << endl;
	cout << "Quarters: " << wallet.quarters << endl;
	cout << "Dimes   : " << wallet.dimes << endl;
	cout << "Nickels : " << wallet.nickels << endl;
	cout << v;
	
	return 0;
}