/*
   CH-230-A
   testshapes.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv)
{

  // examples
  Circle c("A Circle", 5, 2, 2);
  Rectangle r("A Rectangle", 5, 2, 7, 3);
  Square s("A Square", 5, 2, 6);

  c.printName();
  cout << "And the perimeter = " << c.perimeter() << endl;
  cout << "And the area = " << c.area() << "\n" << endl;

  
  r.printName();
  cout << "And the perimeter = " << r.perimeter() << endl;
  cout << "And the area = " << r.area() << "\n"<< endl;
  
  s.printName();
  cout << "And the perimeter = " << s.perimeter() << endl;
  cout << "And the area = " << s.area() << "\n" << endl;

  return 0;
}