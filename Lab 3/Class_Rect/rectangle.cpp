#include "rectangle.h"

//Constructors
Rectangle::Rectangle() {
	this->length = 0.0;
	this->width = 0.0;
}

Rectangle::Rectangle(double length, double width) {
	this->length = length;
	this->width = width;
}

//Accessors
double Rectangle::getLength() {
	return length;
}

double Rectangle::getWidth() {
	return width;
}

double Rectangle::getArea() {
	return length*width;
}

double Rectangle::getPerim() {
	return (2*length)+(2*width);
}

//Mutators
void Rectangle::setLength(double len) {
	length = len;
}

void Rectangle::setWidth(double wid) {
	width = wid;
}