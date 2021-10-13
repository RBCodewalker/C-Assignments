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
	protected:
	// updated from private such that a child class can access the data
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	protected:
	// updated from private such that a child class can access the data
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);
         // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);
        // moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape {
    // a regular polygon is a centered_shape with a number of edges
	private:
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape { 
    // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon {
// a Hexagon is a shape with six equal sides
	private:
		double side;
        std::string color;
	public:
	    Hexagon(const std::string&, double, double, const double, 
        const std::string);
		Hexagon();
		Hexagon(const Hexagon&);
        ~Hexagon();

        void setside(const double s); // setter methods
        void setcolor(const std::string col);
        
        double perimeter(); // perimeter method
        double area(); // area method

        double getside() const; // getter methods
        std::string getcolor() const;
        

		void toprinthex(); // printing function
};
    
#endif