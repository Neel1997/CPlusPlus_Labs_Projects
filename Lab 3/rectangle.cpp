#include <iostream>
#include "rectangle.h"

using namespace std;

rectangle::rectangle(){
	length = 0;
	width = 0;
}

rectangle::rectangle(double length, double width) {
	setLength(length);
	setWidth(width);
}

void setLength(double length) {
	cout << "length = ";
	cin >> length;
}

void setWidth(double width) {
	cout << "width = ";
	cin >> width;
}

void getLW(double length, double width, double area, double perim) {
	cout << "length = " << length;
	cout << "   width = " << width << endl;
	cout << "area = " << area << endl;
	cout << "perimeter = " << perim << endl;
}

double getArea(double length, double width) {
	rectangle.area = length * width;
	return rectangle.area;
}

double getPerim(double length, double width) {
	perim = (2 * length) + (2 * width);
	return perim;
}