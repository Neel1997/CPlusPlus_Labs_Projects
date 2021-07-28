/*************************************************************************
* Lab Number: 6
*
* Programmer(s) : Neel Patel & Tyler Fries
*
* Submission Date: September 29, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Operator Overloading
*
**************************************************************************/
#include <iostream>
#include <cstdlib>
#include "complex.h"

using namespace std;

int main() {
	complex n01(1,8), n02(2,7), n03(3,6), n04(4,5); //n01-04 are set with values
	complex n05, n06, n07, n08, n09, n10;
	cout << "num01 = " << n01 << endl;
	cout << "num02 = " << n02 << endl;
	cout << "num03 = " << n03 << endl;
	cout << "num04 = " << n04 << endl << endl;
	n05 = n01 + n02;
	n06 = n03 + 3.0;
	n07 = 5.7 + n04;
	n08 = n01 - n02;
	n09 = n03 - 3.0;
	n10 = 5.7 - n04;
	cout << "num05 = num01 + num02 : " << n05 << endl;
	cout << "num06 = num03 + 3.0   : " << n06 << endl;
	cout << "num07 = 5.7   + num04 : " << n07 << endl;
	cout << "num08 = num01 - num02 : " << n08 << endl;
	cout << "num09 = num03 - 3.0   : " << n09 << endl;
	cout << "num10 = 5.7   - num04 : " << n10 << endl;
	
return 0;
}