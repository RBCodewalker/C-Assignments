/*
   CH-230-A
   Shapes.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape(default)
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  

        void setname(std::string newname); // setter
        std::string getname(); // getter
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);
        // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);
        // moves the shape, i.e. it modifies it center

        void setCenteredShape(double lx, double by);
        double getCenteredShape();
};

class RegularPolygon : public CenteredShape {
    // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);

        void setEdgesNumber(int en);
        int getEdgesNumber();
};

class Circle : public CenteredShape {
    // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
        
        void setRadius(double r); // setter

        double perimeter(); // perimeter method
        double area(); // area method
        
        double getRadius(); // getter
};

class Rectangle : public RegularPolygon {
// a Rectangle is a shape with four sides where the opposite sides are equal
	private:
		double len, wid;
	public:
		Rectangle(const std::string&, double, double, double, double);
		Rectangle();
		Rectangle(const Rectangle&);

        void setlen(double l); // setter methods
        void setwid(double b);
        
        double perimeter(); // perimeter method
        double area(); // area method

        double getlen(); // getter methods
        double getwid();

};

class Square : public Rectangle {
    // a Square is a rectangle with all sides equal
	private:
		double leng;
	public:
		Square(const std::string&, double, double, double);
		Square();
		Square(const Square&);

        void setleng(double s); // setter
        
        double perimeter(); // perimeter method
        double area(); // area method

        double getleng(); // getter
};
    
#endif