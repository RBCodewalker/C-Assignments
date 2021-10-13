/*
   CH-230-A
   testvirtual.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <time.h>
#include <cstring>

const int num_obj = 26;
int main() {
	srand(time(NULL));

	for (int i = 0; i < 25; i++)
	{
		char *colors[4];
		int r, s, t, u;
		r = rand() % 3 + 1;
		t = rand() % 3 + 1;
		s = rand() % 105 - 5;
		u = rand() % 105 - 5;
        strcpy(colors[0], "RED");
		strcpy(colors[1], "BLACK");
		strcpy(colors[2], "VIOLET");
		strcpy(colors[3], "BLUE");

		if(t == 0)
		{
			cout << "Creating Circle: ";
	        Circle c(colors[r], s);
			Area *ref1 = &c;
            cout << "Area of the circle is ==> " << ref1->calcArea();
			cout << "Perimeter of the circle is ==> " << ref1->calcPerimeter();
		}
		else if(t == 1)
		{
			cout << "Creating Ring: ";
	        Ring x(colors[r], s, u);
			Area *ref2 = &x;
            cout << "Area of the ring is ==> " << ref2->calcArea();
			cout << "Perimeter of the ring is ==> " << ref2->calcPerimeter();
		}
		else if(t == 2)
		{
			cout << "Creating Rectangle: ";
	        Rectangle y(colors[r], s, u);
			Area *ref3 = &y;
            cout << "Area of the rectangle is ==> " << ref3->calcArea();
			cout << "Perimeter of the rectangle is==>" << ref3->calcPerimeter();
		}
		else if (t == 3)
		{
			cout << "Creating Square: ";
	        Square z(colors[r], s);
			Area *ref4 = &z;
            cout << "Area of the square is ==> " << ref4->calcArea();
			cout << "Perimeter of the square is ==> " << ref4->calcPerimeter();
		}
		else
		{
			cout << "No execution!!!";
		}
	}		   
}
