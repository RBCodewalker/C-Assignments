/*
   CH-230-A
   testcomplex.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "Complex.h"

using namespace std;

int main(int argc, char **argv)
{
    Complex com1, com2;
    double ref;
    
    cout << "Real part of first complex number: ";
    cin >> ref;
    com1.setReal(ref);

    cout << "Imaginary part of first complex number: ";
    cin >> ref;
    com1.setImaginary(ref);

    cout << "Real part of second complex number: ";
    cin >> ref;
    com2.setReal(ref);

    cout << "Imaginary part of second complex number: ";
    cin >> ref;
    com2.setImaginary(ref);

    cout << "Your first number = ";
    com1.disp();
    cout << endl;

    cout << "Your second number = ";
    com2.disp();
    cout << endl;

    Complex temp;
    
    temp = com1.add(com2);
    cout << "Addition = ";
    temp.disp();
    cout << endl;

    temp = com1.diff(com2);
    cout << "Difference = ";
    temp.disp();
    cout << endl;

    temp = com1.prod(com2);
    cout << "Product = ";
    temp.disp();
    cout << endl;

    temp = com1.conj();
    cout << "Conjugate of first number = ";
    temp.disp();
    cout << endl;

    temp = com2.conj();
    cout << "Conjugate of the second number = ";
    temp.disp();
    cout << endl;

    return 0;
}