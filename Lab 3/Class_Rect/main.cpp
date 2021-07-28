#include <iostream>
#include "rectangle.h"

using namespace std;

void display(Rectangle);

int main() {
	
	Rectangle rect1; //used Default constructor
	rect1.setLength(10); //uses mutators
	rect1.setWidth(8);
	
/* 	cout << "Rectangle 1" << endl;
	cout << "length - " << rect1.getLength() << endl;
	cout << "width - " << rect1.getWidth() << endl;
	cout << "area - " << rect1.getArea() << endl;
	cout << "perimeter - " << rect1.getPerim() << endl << endl; */
	display(rect1);
	
	Rectangle rect2(3,4);
	
	cout << "Rectangle 2" << endl;
	cout << "length - " << rect2.getLength() << endl;
	cout << "width - " << rect2.getWidth() << endl;
	cout << "area - " << rect2.getArea() << endl;
	cout << "perimeter - " << rect2.getPerim() << endl << endl;
	
	cout << "Area Difference - " << rect1.getArea() - rect2.getArea() << endl;
	cout << "Perimeter sum   - " << rect1.getPerim() + rect2.getPerim() << endl;
	
	return 0;
}

void display(Rectangle r) {
	cout << "Rectangle r" << endl;
	cout << "length - " << r.getLength() << endl;
	cout << "width - " << r.getWidth() << endl;
	cout << "area - " << r.getArea() << endl;
	cout << "perimeter - " << r.getPerim() << endl << endl;
	
}