/*
   CH-230-A
   Shapes.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <string>


using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

// default constructor for shape
Shape::Shape()
{
    name = "";
}

void Shape::printName() const {
	cout << name << endl;
}

//copy constructor for shape
Shape::Shape(const Shape& ref)
{
    name = ref.name;
}

//default constructor for centered shape
CenteredShape::CenteredShape()
{
    x = 0.0;
    y = 0.0;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

//copy constructor for centered shape
CenteredShape::CenteredShape(const CenteredShape& ref)
{
    x = ref.x;
    y = ref.y;
}

//default constructor for regular polygon
RegularPolygon::RegularPolygon()
{
    EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n, nx, ny) 
{
	EdgesNumber = nl;
}

//copy constructor for regular polygon
RegularPolygon::RegularPolygon(const RegularPolygon& ref)
{
    EdgesNumber = ref.EdgesNumber;
}

//default constructor for circle
Circle::Circle()
{
    Radius = 0;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n, nx, ny) 
{
	Radius = r;
}

//copy constructor for circle
Circle::Circle(const Circle& ref)
{
    Radius = ref.Radius;
}

//default constructor for square
Square::Square()
{
    leng = 0;
}

Square::Square(const string& n, double nx, double ny, double lbs) : 
  Rectangle(n, nx, ny, lbs, lbs)
{
	leng = lbs;
}

//copy constructor for Square class
Square::Square(const Square& ref)
{
    leng = ref.leng;
}

//default constructor for rectangle
Rectangle::Rectangle()
{
    len = 0.0;
    wid = 0.0;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double l, double b) : 
  RegularPolygon(n, nx, ny, 4) 
{
	len = l;
    wid = b;
}

//copy constructor for rectangle
Rectangle::Rectangle(const Rectangle& ref)
{
    len = ref.len;
    wid = ref.wid;
}

//setter and getter for shape
void Shape::setname(string newname)
{
    name = newname;
}
string Shape::getname()
{
    return name;
}

//setter and getter method for centered shape
void CenteredShape::setCenteredShape(double lx, double by)
{
    x = lx;
    y = by;
}
double CenteredShape::getCenteredShape()
{
    return x;
    return y;
}


//setter and method for regular polygon
void RegularPolygon::setEdgesNumber(int en)
{
    EdgesNumber = en;
}
int RegularPolygon::getEdgesNumber()
{
    return EdgesNumber;
}

//setter and getter method for circle
void Circle::setRadius(double r)
{
    Radius = r;
}
double Circle::getRadius()
{
    return Radius;
}

//setter and getter methods for rectangle
void Rectangle::setlen(double l)
{
    len = l;
}
void Rectangle::setwid(double b)
{
    wid = b;
}
double Rectangle::getlen()
{
    return len;
}
double Rectangle::getwid()
{
    return wid;
}

//setter and getter method for square
void Square::setleng(double s)
{
    leng = s;
}
double Square::getleng()
{
    return leng;
}

// Perimeter and area methods

double Circle::perimeter()
{
    return (2 * 3.14 * Radius);
}
double Circle::area()
{
    return (3.14 * Radius * Radius);
}

double Rectangle::perimeter()
{
    return (2*(len + wid));
}
double Rectangle::area()
{
    return wid * len;
}

double Square::perimeter()
{
    return 4 * leng;
}
double Square::area()
{
    return leng * leng;
}