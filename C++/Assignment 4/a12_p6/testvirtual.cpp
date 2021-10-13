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
 
const int num_obj = 7;
int main() {
	Area *list[num_obj];
	// AN ARRAY OF SIX OBJECTS OF THE CLASS AREA IS DEFINED
	int index = 0;	/* AN INTEGER INDEX IS DEFINED AND IS SET TO 0 WHICH WILL
	                   LATER BE USED TO COUNT THE ITERATION IN A LOOP */
	double sum_area = 0.0; /* A DOUBLE SUM_AREA IS DEFINED AND SET TO 0.0
	                        WHERE THE SUM OF THE AREAS OF ALL THE CREATED
							OBJECTS IS STORED */  
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2); 
	/*AN INSTANCE BLUE_RING OF RING CLASS IS DEFINED WITH BLUE COLOR
	  INNNER RADIUS 2 AND OUTER RADIUS 5 AND SIMILARLY OTHER INSTANCES ARE
	  DEFINED BELOW*/  
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square navy_square("NAVY", 77);
	list[0] = &blue_ring;	/* ALL THE INSTANCES OF OBJECTS ARE STORED IN THE
	                         ARRAY OF THE OBJECTS OF AREA CLASS WHICH WAS
							 DEFINED ABOVE */
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &navy_square;
	while (index < num_obj) {	/* THE INSTANCES OF OBJECTS ARE ACCESSED USING
	                               THE ARRAY OF OBJECTS. AND THIS LOOP ITERATES
								   UNTIL IT REACHES THE LAST INSTANCE */
		(list[index])->getColor();				
		double area = list[index]->calcArea(); /* AREA OF THE INSTANCE IS
		                                          ACCESSED AND STORED IN THE
												  VARIABLE AREA WHICH IS ADDED
												  TO THE SUM_AREA VARIABLE WHICH
												  FINALLY GIVES US THE SUM OF
												  AREAS OF ALL THE INSTANCES*/
		double perimeter = list[index]->calcPerimeter();
		sum_area += area;
		sum_perimeter += perimeter;
		index++;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	/* THE SUM OF THE AREAS OF ALL
			                                     THE INSTANCES ARE PRINTED IN
												 THE END */
	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;
	
	return 0;

/*
	             -----------RELATION BETWEEN THE CLASSES--------------
		   
		                           +----------+
		                           |   AREA   |
		                           +----------+
		                           /		  \
		                          /			   \
	                         +--------+   +-----------+
	                         | CIRCLE |   | RECTANGLE |
	                         +--------+   +-----------+
	  	                          |			    |
	                          +------+      +--------+
	                          | RING |      | SQUARE |
	                          +------+      +--------+

*/		   
}
