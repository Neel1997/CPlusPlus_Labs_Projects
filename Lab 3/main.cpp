/*************************************************************************
* Lab Number: 3
*
* Programmer(s) : Neel Patel & Tyler Fries
*
* Submission Date: 
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: rectangle Class
*
**************************************************************************/
#include <iostream>
#include "rectangle.cpp"

using namespace std;

void setLength(double);
void setWidth(double);
void getLW(double, double);
void getArea();
void getPerim();
		
int main() {
	rectangle rect1, rect2;
	setLength(length);
	setWidth(width);
	getArea(length, width);
	getPerim(length, width);
	getLW(length, width, area, perim);
}