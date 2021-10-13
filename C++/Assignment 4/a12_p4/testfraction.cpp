/*
   CH-230-A
   testfraction.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	  Fraction a, b, c, d;
    // implementing input and output overloaded operators
    cout << "Enter a fraction ==> " << endl;
    cin >> a;
    cout << "Enter another fraction ==> " << endl;
    cin >> b;
    c = a * b;
    d = a / b;
    cout << "The product of the fractions is: " << c << endl;
    cout << "The division of the fractions is: " << d << endl;

    return 0;
}