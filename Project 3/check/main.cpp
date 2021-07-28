/****************************************************************************
 * Project number: 3
 * Programmer: Tommy Vu
 *
 * Submission Date: 09/27/2017
 * EGRE 246 Fall 2017 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 * Description:
 *
 * ***************************************************************************/

#include <iostream>
#include <cstdlib>
#include "grocery.h"


using namespace std;

int main()
{
    double budget = 50.00;
    
    
    Grocery ShoppingList;
    Grocery ShoppingCart;
    ShoppingList.setName("Shopping");
    ShoppingCart.setName("Cart");
    ShoppingList("Gallon of Milk", 6.99);
    ShoppingList("Dozen Eggs", 5.69);
    ShoppingList("Peanut Butter", 4.99);
    ShoppingList("Chicken Strips", 6.99);
    ShoppingList("Ice Cream", 4.00);
    ShoppingList("Cereal", 3.98);
    ShoppingList("3lbs of Apples", 4.11);
    ShoppingList("Gift Card", 10);
    ShoppingList("10 pack of socks", 19.78);
    ShoppingList("48 count AA Batteries", 14.49);
    cout << ShoppingList << endl;

    do{
        ShoppingCart.push(ShoppingList.getTop(),ShoppingList.getPrice());
        ShoppingList.pop();
        budget = budget - ShoppingList.getPrice();
    } while (budget > 0); // Adds to the Shopping Cart until reaches the budget while popping the Shopping List
    
    
    cout << "...Shopping..." << endl << endl;
    
    cout << ShoppingList << endl;
    cout << ShoppingCart << endl;
    return 0;
}
