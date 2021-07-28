#include <iostream>
#include "rectangle.h"
using namespace std;

/* void Rectangle::setVal () {
  double x, y;	
 
  cin >> x;
  cin >> y;
  width = y;
  length = x;
} */
Rectangle::Rectangle (double y, double x) { //Overloaded Constructor
  width = y;
  length = x;
}
Rectangle::Rectangle () { //Default Constructor
  width = 3;
  length = 4;
}

double Rectangle::area() {
	return width*length;
}

double Rectangle::proxyW() {
	return width; 
}

double Rectangle::proxyL() {
	return length;
}

double Rectangle::perim() {
	return (2*width) + (2*length);
}