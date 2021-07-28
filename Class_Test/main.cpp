/*************************************************************************
* Lab Number: 4
*
* Programmer(s) : Neel Patel & Tyler Fries
*
* Submission Date: September 16, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Rectangle Class
*
**************************************************************************/
#include <iostream>
#include <stdlib.h>
#include "rectangle.cpp"
#include <math.h>

using namespace std;

int main () {
  Rectangle rect1;
  Rectangle rect2(2,3); 
  //rect1.setVal ();
  //rect2.setVal ();
  cout << "Rectangle 1" << endl;
  cout << "Length = " << rect1.proxyL() << "  Width = " << rect1.proxyW() << endl;
  cout << "Area = " << rect1.area() << endl;
  cout << "Perimeter = " << rect1.perim() << endl << endl;
  cout << "Rectangle 2" << endl;
  cout << "Length = " << rect2.proxyL() << "  Width = " << rect2.proxyW() << endl;
  cout << "Area = " << rect2.area() << endl;
  cout << "Perimeter = " << rect2.perim() << endl << endl;
  cout << "Add Perimeters = " << rect1.perim() + rect2.perim() << endl;
  cout << "Subtract Areas = " << abs(rect1.area() - rect2.area()) << endl << endl;
  return 0;
}