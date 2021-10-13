/*
   CH-230-A
   Square.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include <cmath>
#include "Square.h"

Square::Square(const char *n, double lside) 
					: Rectangle(n, lside, lside) {
	side = lside;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return (Rectangle::calcArea());
}

double Square::calcPerimeter() const {
	std::cout << "calcPerimeter of Square...";
	return (Rectangle::calcPerimeter());
}
