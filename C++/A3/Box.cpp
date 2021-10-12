/*
   CH-230-A
   Box.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "Box.h"

using namespace std;

void Volbox::setlength(double ln)
{
    l = ln;
}

void Volbox::setbreadth(double br)
{
    b = br;
}

void Volbox::setheight(double ht)
{
    h = ht;
}

double Volbox::Vol(double ln, double br, double ht)
{
    l = ln;
    b = br;
    h = ht;
    V = ln * br * ht;
    return V;
}

void Volbox::disp()
{
    cout << "Length: " << l << endl;
    cout << "Breadth: " << b << endl;
    cout << "Height: " << h << endl;
    cout << "Calculated Volume = " << V << endl;
}

double getlength(double ln)
{
    return ln;
}

double getbreadth(double br)
{
    return br;
}

double getheight(double ht)
{
    return ht;
}