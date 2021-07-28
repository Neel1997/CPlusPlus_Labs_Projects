class Rectangle {
  private:  
	double width, length;
  public:
   // void setVal ();
	double proxyL(); //Accessor
	double proxyW(); // Accessor
    double area();  // Accessor
	double perim(); // Accessor
	Rectangle(double, double); //Overloaded constructor
	Rectangle (); 
};