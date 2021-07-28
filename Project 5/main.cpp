/****************************************************************************
* Project number: 5
*
* Programmer: Neel Patel
*
* Submission Date: November 8, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Groceries Part 2 with Inheritance and File Input from CMD
*
*
***************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include "item.h"
#include "fruit.h"
#include "dairy.h"
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]) {
	
	int i = 1;
	char buffer[256];
	char type[256];
	char name[256];
	double price;
	string barCode;
	int expMonth;
	int expDay;
	int expYear;
	double temp;
	
	vector<item*> arr;
	
	if (argc < 2) {
		cout << "Too few arguments" << endl;
		return 1;
	}
	if (argc > 2) {
		cout << "Too many arguments" << endl;
		return 1;
	}
	
	ifstream iFile;
	
	iFile.open(argv[1]);
	
	if (!iFile.is_open()) {
		cout << argv[1] << " did not open..." << endl;
		return 1;
	}
	
	while (!iFile.eof()) {
		iFile.getline(type, 256, ',');
		
		item *I1 = new item();
		fruit *F1 = new fruit();
		dairy *D1 = new dairy();
		
		
		if (type[0] == 'i' && type[1] == 't' && type[2] == 'e' && type[3] == 'm') {
			iFile.getline(name, 256, ',');
			
			I1->setName(name);
			iFile.getline(buffer, 256, ',');
			price = atof(buffer);
			I1->setPrice(price);
			iFile.getline(buffer, 256, ',');
			barCode = string(buffer);
			I1->setbarCode(barCode);
			I1->display(i, type);
			cout << endl;	

			arr.push_back(I1);
		}
		
		 else if (type[0] == 'f' && type[1] == 'r' && type[2] == 'u' && type[3] == 'i') {
			iFile.getline(name, 25, ',');
			F1->setName(name);
			iFile.getline(buffer, 256, ',');
			price = atof(buffer);
			F1->setPrice(price);
			iFile.getline(buffer, 256, ',');
			barCode = string(buffer);
			F1->setbarCode(barCode);
			iFile.getline(buffer, 256, ',');
			expMonth = atoi(buffer);
			iFile.getline(buffer, 256, ',');
			expDay = atoi(buffer);
			iFile.getline(buffer, 256, ',');
			expYear = atoi(buffer);
			F1->setExp(expMonth, expDay, expYear);
			F1->display(i, type);
			
			arr.push_back(F1);
		}
		
		 else if (type[0] == 'd' && type[1] == 'a' && type[2] == 'i' && type[3] == 'r') {
			iFile.getline(name, 25, ',');
			D1->setName(name);
			iFile.getline(buffer, 256, ',');
			price = atof(buffer);
			D1->setPrice(price);
			iFile.getline(buffer, 256, ',');
			barCode = string(buffer);
			D1->setbarCode(barCode);
			iFile.getline(buffer, 256, ',');
			expMonth = atoi(buffer);
			iFile.getline(buffer, 256, ',');
			expDay = atoi(buffer);
			iFile.getline(buffer, 256, ',');
			expYear = atoi(buffer);
			iFile.getline(buffer, 256, ',');
			temp = atoi(buffer);
			D1->setExp(expMonth, expDay, expYear);
			D1->setTemp(temp);
			D1->display(i, type);
			cout << endl;
			
			arr.push_back(D1);
		}
		i++;
		
	}
	
	iFile.close();
	return 0;
}