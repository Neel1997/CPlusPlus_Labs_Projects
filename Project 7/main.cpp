/****************************************************************************
* Project number: 7
*
* Programmer: Neel Patel
*
* Submission Date: December 6, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Bubble Sort for Linked List
*
*
***************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <stdexcept>
#include <ctime>
#include "linked.h"
#include "linked.cpp"

using namespace std;

int main(int argc, char* argv[]) {
	string s = "Too few arguments \n Usage: main.exe NUMBER_OF_ITEMS SEED";
	try {
		if (argc < 3) {
		throw runtime_error(s);
		}
	}
	
	catch (runtime_error e) {
		cout << e.what() << endl;
		return 1;
	}
	
	List<int> numbers;
	List<char> characters;
	int i = 0;
	long int first;
	long int second;
	
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	
	srand(second);
	
	while (i < first) {
		numbers.push(rand() % 100);
		characters.push('a' + rand() % 26);
		i++;
	}
	
	cout << "List 1: " << endl;
	numbers.display();
	cout << endl;
	
	numbers.bubbleSort();
	numbers.display();
	
	cout << endl << "List 2: " << endl;
	characters.display();
	cout << endl;
	
	characters.bubbleSort();
	characters.display();
	
	
	
	
	return 0;
}