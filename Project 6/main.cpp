/****************************************************************************
* Project number: 6
*
* Programmer: Neel Patel
*
* Submission Date: November 22, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Templates with LIFO Linked List
*
*
***************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>
#include "list.h"
#include "list.cpp"
#include "arr.h"
#include "arr.cpp"

using namespace std;

int main() {
	List<int> numbers;
	List<char> letters;
	List<string> phrases;
	List<arr> array;
//INTEGER NUMBERS	
	numbers.push(0);
 	numbers.push(1);
	numbers.push(2);
	numbers.push(3); 
	numbers.push(4);
	numbers.push(5);
	numbers.push(6);
	numbers.push(7);
	numbers.push(8);
	numbers.push(9);
	
	cout << "List 1: Full" << endl;
	numbers.display();
	numbers.pop();
	numbers.pop();
	numbers.pop();
	cout << endl << "List 1: Popped 3" << endl;
	numbers.display();
// CHARACTER LETTERS	
	letters.push('a');
	letters.push('b');
	letters.push('c');
	letters.push('d');
	letters.push('e');
	letters.push('f');
	letters.push('g');
	letters.push('h');
	letters.push('i');
	letters.push('j');
	
	cout << endl << "List 2: Full" << endl;
	letters.display();
	letters.pop();
	letters.pop();
	letters.pop();
	cout << endl << "List 2: Popped 3" << endl;
	letters.display();
//STRING PHRASES	
	phrases.push("Please");
	phrases.push("Send");
	phrases.push("Your");
	phrases.push("Answer");
	phrases.push("To");
	phrases.push("Old");
	phrases.push("Pink");
	phrases.push("Care");
	phrases.push("Of");
	phrases.push("The");
	phrases.push("Funny");
	phrases.push("Farm");
	phrases.push("Chalfont");
	
	cout << endl << "List 3: Full" << endl;
	phrases.display();
	phrases.pop();
	phrases.pop();
	phrases.pop();
	cout << endl << "List 3: Popped 3" << endl;
	phrases.display();
// ARRAY INDEXES	
 	for (int i = 0; i < 5; i++) {
		array.push(arr(i*3, i*3+1, i*3+2));
	} 
	
	cout << endl << "List 4: Full" << endl;
	array.display();
	cout << endl << "List 4: Popped 3" << endl;
	array.pop();
	array.pop();
	array.pop();
	array.display();
	
	return 0;
}