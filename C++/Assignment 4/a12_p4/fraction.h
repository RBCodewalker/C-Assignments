/*
   CH-230-A
   fraction.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

using namespace std;

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	//int gcd(int a, int b);		// calculates the gcd of a and b
	//int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	// using friend keyword to access private parameters
	friend ostream& operator<<(ostream& out, Fraction& ref1);
    // USE OF OPERATOR OVERLOADING
	friend istream& operator>>(istream& in, Fraction& ref2);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
};


#endif /* FRACTION_H_ */