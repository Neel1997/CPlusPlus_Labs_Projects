/*************************************************************************
* Lab Number: 10
*
* Programmer(s) : Neel Patel & Tyler Fries
*
* Submission Date: November 13, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Median Values with Templates
*
**************************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdexcept>
#include <ctime>
#include <typeinfo>

using namespace std;

int main(int argc, char* argv[]) {
	try { 																														//RUNTIME ERROR 
		if (argc < 3) {
			throw runtime_error("Too Few Arguments");
		} else
		if (argc > 3) {
			throw runtime_error("Too Many Arguments");
		}
	}
	
	catch(runtime_error e) {
		cout << e.what() << endl;
		return 1;
	}
	int i = -1;
	string search = argv[1];
	string token = argv[2];
	i = search.find(token);
	if (i != -1) {
		cout << argv[2] << " found at index " << i << endl;
	}
	
	try {
		if (i == -1) {
			throw runtime_error("Not found");
		}
	}
	
	catch(runtime_error e) {
		cout << argv[2] << " not found in " << argv[1] << endl;
	}
	return 0;
}