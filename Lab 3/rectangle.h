class rectangle {
	public: 
		double area;
		double perim;
		void setLength(double length);
		void setWidth(double width);
		void getLW(double length, double width, double area, double perim);
		double getArea(double length, double width);
		double getPerim(double length, double width);
	private:
		double length;
		double width;
	};