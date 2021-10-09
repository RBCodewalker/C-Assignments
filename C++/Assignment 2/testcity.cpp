/*
   CH-230-A
   testcity.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
    City my;

    string ncity, mcity;
    int pcity;
    double acity;

    cout << "Your city? ";
    getline(cin, ncity); // input line to prevent spacing errors
    cout << "Name of your mayor? ";
    getline(cin, mcity);
    cout << "No. of inhabitants? ";
    cin >> pcity;
    cout << "Area of the city(sq.km)? ";
    cin >> acity;

    my.setcityname(ncity); // using setters to provide the entered data
    my.setinhabs(pcity);
    my.setmayor(mcity);
    my.setarea(acity);

    cout << "About your city:" << endl; // displaying th end result
    my.display();

    return 0;
}