/*
   CH-230-A
   a9_p3.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>

//using namespace std;

float abs(float r) // function to find absolute value of entered float
{
    if (r < 0) r = r * -1;
    return r;
}

int main()
{
    float s, t;
    std :: cout << "Your float: ";
    std :: cin >> s; // input float
    t = abs(s);
    // printing the result
    std :: cout << "The absolute value of your float is " << t << ".";

    return 0;
}