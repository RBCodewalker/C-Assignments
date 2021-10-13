/*
   CH-230-A
   Shapes.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape(const Shape& ref)
{
    name = ref.name;
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

// Constructor
Hexagon::Hexagon(const string& n, double nx, double ny, const double s,
const string col) : RegularPolygon(n, nx, ny, 6)
{
    color = col;
    side = s;
}

//Copy Constructor
Hexagon::Hexagon(const Hexagon& ref) : RegularPolygon(ref.name, ref.x, ref.y, 6)
{
    color = ref.color;
    side = ref.side;
}

Hexagon::~Hexagon() // destructor for hexagon
{
    cout << "Calling destructor!!!" << endl;
}

void Hexagon::setside(const double s) // setter for side
{
    side = s;
}

void Hexagon::setcolor(const string col) // color setter
{
    color = col;
}

double Hexagon::getside() const // side getter
{
    return side;
}

string Hexagon::getcolor() const  // color getter
{
    return color;
}

double Hexagon::perimeter() // perimeter calculation
{
    return (6 * side);
}

double Hexagon::area() // area calculation
{
    return (((3 * sqrt(3)) / 2) * (side * side));
}

void Hexagon::toprinthex()
{
    cout << "The " << this -> color << " hexagon has perimeter " <<
     this -> perimeter() << " and area " << this -> area() << "." << endl;
}