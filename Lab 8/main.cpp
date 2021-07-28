/*************************************************************************
* Lab Number: 8
*
* Programmer(s) : Neel Patel & Tyler Fries
*
* Submission Date: October 27, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Standard Deviation with Command Line
*
**************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[]) {
	if (argc < 3) {
		cout << "Too few arguments" << endl;
		cout << "Usage : main.exe number1 number 2 ..." << endl;
		return 1;
	}
	
	int i;
	float stdev;
	float sum = 0;
	float avg;
	float num[argc];
	
	
	for (i = 1; i < argc; i++) {
		num[i] = atof(argv[i]);
	}
	
	for (i = 1; i < argc; i++) {
		sum += atof(argv[i]);
	}
	
	avg = sum/(argc - 1);
	
	for (i = 1; i < argc; i++) {
		num[i] = pow((num[i] - avg), 2);
	}
	
	sum = 0;
	
	for (i = 1; i < argc; i++) {
		sum += num[i];
	}
	
	stdev = sqrt(sum / (argc - 2));
	
	cout << "Standard deviation: " << stdev << endl;
	
	return 0;
}