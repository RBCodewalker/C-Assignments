/*
   CH-230-A
   Complex.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex
{
    private:
        double rpart;
        double ipart;
    
    public:
        //constructors
        Complex();
        Complex(const Complex& ral);
        Complex(double ral, double img);
        //destructor
        ~Complex();

        //inline setters and getters
        void setReal(double ral)
        {
            rpart = ral;
        }
        void setImaginary(double img)
        {
            ipart = img;
        }
        double getReal()
        {
            return rpart;
        }
        double getImaginary()
        {
            return ipart;
        }

        friend ostream& operator<<(ostream& give, Complex& ref1);
        // USE OF OPERATOR OVERLOADING IN INPUT AND OUTPUT STREAMS
	    friend istream& operator>>(istream& take, Complex& ref2);

        // OVERLOADING ARTHMETIC OPERATORS
        Complex operator+(const Complex&);
        Complex operator*(const Complex&);
        Complex operator-(const Complex&);
        Complex operator=(const Complex&);
};

#endif