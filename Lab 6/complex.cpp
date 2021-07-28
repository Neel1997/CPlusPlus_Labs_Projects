#include "complex.h"
#include <iostream>
#include <cstdlib>

using namespace std;

complex::complex() { //Default Constructor and set the values = 0
	this->real = 0.0;
	this->imaginary = 0.0;
}

complex::complex(double real, double imaginary) { //Overloaded Constructor
	this->real = real;
	this->imaginary = imaginary;
}

complex operator+(complex lhs, complex rhs) { //Use this if there is a complex on the left being added with a complex on the right
	complex temp;
	temp.real = lhs.real + rhs.real;
	temp.imaginary = lhs.imaginary + rhs.imaginary;
	return temp;
}

complex operator+(complex lhs, double real) { //Use this if there is a complex on the left being added with a double on the right
	complex temp;
	temp.real = lhs.real + real;
	temp.imaginary = lhs.imaginary;
	return temp;
}

complex operator+(double real, complex rhs) { //Use this if there is a double on the left being added with a complex on the right
	complex temp;
	temp.real = rhs.real + real;
	temp.imaginary = rhs.imaginary;
	return temp;
}

complex operator-(complex lhs, complex rhs) { //Use this if there is a complex on the left being subtracted with a complex on the right
	complex temp;
	temp.real = lhs.real - rhs.real;
	temp.imaginary = lhs.imaginary - rhs.imaginary;
	return temp;
}

complex operator-(complex lhs, double real) { //Use this if there is a complex on the left being subtracted with a double on the right
	complex temp;
	temp.real = lhs.real - real;
	temp.imaginary = lhs.imaginary;
	return temp;
}

complex operator-(double real, complex rhs) { //Use this if there is a double on the left being subtracted with a complex on the right
	complex temp;
	temp.real = real - rhs.real;
	temp.imaginary = rhs.imaginary;
	return temp;
}


ostream& operator<<(ostream& os, complex& rhs) { //This is used when the << is used for cout statements with complex numbers
	os << rhs.real << " + j(" << rhs.imaginary <<")";
	return os;
}