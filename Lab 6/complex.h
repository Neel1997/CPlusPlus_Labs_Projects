#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class complex {
	private:
		double real;
		double imaginary;
	public:
		complex(); //Default constructor
		complex(double, double); //Overloaded constructor
		friend complex operator+(complex, complex); //adds two complex
		friend complex operator+(complex, double); //adds a complex and a double in that order respectively
		friend complex operator+(double, complex); //adds a double and a complex in that order respectively
		friend complex operator-(complex, complex); //substracts two complex
		friend complex operator-(complex, double); //substracts a complex and a double respectively
		friend complex operator-(double, complex); //substracts a double and a complex
		friend ostream& operator<<(ostream&, complex&); //ostream helps to cout
};

#endif