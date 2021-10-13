/*
   CH-230-A
   fraction.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */


#include "fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}
/*
Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}
*/
ostream& operator<<(ostream& out, Fraction& ref1)
    // prints it to the screen
{
    out << ref1.num << "/" << ref1.den << std::endl;
    return out;
}
istream& operator>>(istream& in, Fraction& ref2)
    // accepts input from the keyboard
{
    in >> ref2.num >> ref2.den;
    return in;
}

Fraction Fraction::operator*(const Fraction& nex)
// OPERATOR OVERLOADING FOR MULTIPLICATION OF FRACTIONS
{
    Fraction ref3;
    ref3.den = den * nex.den;
    ref3.num = num * nex.num;
    return ref3;
}

Fraction Fraction::operator/(const Fraction& nex)
// OPERATOR OVERLOADING FOR DIVISION OF FRACTIONS
{
    Fraction ref4;
    ref4.num = num * nex.den;
    ref4.den = den * nex.num;
    return ref4;
} 