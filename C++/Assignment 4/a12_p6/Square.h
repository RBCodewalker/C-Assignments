/*
   CH-230-A
   Square.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double lside);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double side;
};

#endif