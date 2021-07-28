#ifndef RECTANGLE_H //Need this in all .h files to make sure this isn't taken
#define RECTANGLE_H 

class Rectangle {
	private:
		double length;
		double width;
	public:
		Rectangle(); //Default Constructor
		Rectangle(double, double); //Overloaded Constructor
		
		//Accessors
		double getLength();
		double getWidth();
		double getArea();
		double getPerim();
		
		//Mutators
		void setLength(double);
		void setWidth(double);
};
		
#endif //ends the ifndef