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
    
    if((a > b) == true)
    {
      cout << a << " is the greater fraction" << endl;
    }
    else if((b > a) == true)
    {
      cout << b << " is the greater fraction" << endl;
    }
    else
    {
      cout << "The fractions  are equal" << endl;
    }
    
    c = a + b;
    cout << "The sum of the fractions is: " << c << endl;

    d = a - b;
    cout << "The difference between the fractions is: " << d << endl;
    
    return 0;
}