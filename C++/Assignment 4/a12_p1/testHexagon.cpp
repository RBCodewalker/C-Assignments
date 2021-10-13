/*
   CH-230-A
   testHexagon.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char **argv)
{
    Hexagon h("Hexagon 1", 5, 6, 9, "blue"); // example 1 of hexagon
    Hexagon e("Hexagon 2", 5, 6, 15, "green"); // example 2 of hexagon
    Hexagon x(e); // coying second example for example 3

    h.toprinthex();
    e.toprinthex();
    x.toprinthex();

    return 0;
}