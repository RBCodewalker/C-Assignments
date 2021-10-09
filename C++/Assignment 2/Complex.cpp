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

void Complex::setReal(double ral)
{
    rpart = ral;
}

void Complex::setImaginary(double img)
{
    ipart = img;
}

Complex Complex::add(Complex c1)
{
    Complex cw;
    cw.rpart = rpart + c1.rpart;
    cw.ipart = ipart + c1.ipart;
    return cw;
}

Complex Complex::diff(Complex c1)
{
    Complex cw;
    cw.rpart = rpart - c1.rpart;
    cw.ipart = ipart - c1.ipart;
    return cw;
}

Complex Complex::conj()
{
    Complex cw;
    cw.rpart = rpart;
    cw.ipart = -ipart;
    return cw;
}

Complex Complex::prod(Complex c1)
{
    Complex cw;
    cw.rpart = (rpart * c1.rpart) - (ipart  * c1.ipart);
    cw.ipart = (rpart * c1.ipart) + (c1.rpart * ipart);
    return cw;
}

void Complex::disp()
{
    cout << noshowpos << rpart << showpos <<  ipart << "i" << endl;
}