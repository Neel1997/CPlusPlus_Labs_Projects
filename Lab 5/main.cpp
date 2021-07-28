/*************************************************************************
* Lab Number: 5
*
* Programmer(s) : Neel Patel & Tyler Fries
*
* Submission Date: September 23, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Linked List
*
**************************************************************************/

#include <cstdlib>
#include <iostream>
#include "Linked.h"

using namespace std;

int main() {
	Linked L;
	int i;
	L.display();
	for (i = 10; i >= 0; i--) {
		L.push(i);
	}
	L.display();
	L.pop();
	L.pop();
	L.pop();
	L.display();
	
	return 0;
}