/*
   CH-230-A
   Complex.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    rpart = 0;
    ipart = 0;
}

Complex::Complex(double x, double y)
{
    rpart = x;
    ipart = y;
}

Complex::~Complex() {}

Complex::Complex(const Complex& val) {}

istream& operator>>(istream& take, Complex& ref2)
{
    return take >> ref2.rpart >> ref2.ipart;
}

ostream& operator<<(ostream& give, Complex& ref1)
{
    return give << noshowpos << ref1.rpart << showpos << ref1.ipart
    << "i" << endl;
}

Complex Complex::operator+(const Complex& next)
// OPERATOR OVERLOADING FOR ADDITION OF COMPLEX NUMBERS
{
    Complex ref1;
    ref1.rpart =  (rpart + next.rpart);
    ref1.ipart = (ipart + next.ipart);
    return ref1;
}

Complex Complex::operator-(const Complex& next)
// OPERATOR OVERLOADING FOR SUBRACTION OF COMPLEX NUMBERS
{
    Complex ref2;
    ref2.rpart =  (rpart - next.rpart);
    ref2.ipart = (ipart - next.ipart);
    return ref2;
}

Complex Complex::operator*(const Complex& next)
// OPERATOR OVERLOADING FOR MULTIPLICATION OF COMPLEX NUMBERS
{
    Complex ref3;
    ref3.rpart =  (rpart * next.rpart) - (ipart * next.ipart);
    ref3.ipart = (ipart * next.rpart) + (rpart * next.ipart);
    return ref3;
}

Complex Complex::operator=(const Complex& next)
// OPERATOR OVERLOADING FOR ASSIGNING COMPLEX NUMBERS
{
    rpart = next.rpart;
    ipart = next.ipart;
    return *this;
}