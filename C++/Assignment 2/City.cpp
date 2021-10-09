/*
   CH-230-A
   City.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "City.h"

using namespace std;

//SETTING THE VALUES FOR PARAMETERS USING SETTERS AND GETTERS
void City::setcityname(string& name)
{
    cname = name;
}

void City::setinhabs(int inhabs)
{
    pop = inhabs;
}

void City::setmayor(string& mayor)
{
    may = mayor;
}

void City::setarea(double area)
{
    surf = area;
}

void City::display() // PRINTING METHOD
{
    cout << cname << " has " << pop
    << "inhabitants. The mayor of this city is "
    << may << ". The total surface area of the city is "
    << surf << "square kilometers." << endl;
}

int City::getinhabs()
{
    return pop;
}

double City::getarea()
{
    return surf;
}