/*
   CH-230-A
   a9_p2.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    double x;
    string s;

    cout << "Enter an integer: ";
    cin >> n; // input integer
    cout << "Enter a double: ";
    cin >> x; // input double
    cout << "Enter a string: ";
    cin >> s; // input string
    
    for (int i = 0; i < n; i++) // using for loop for repetition
    {
        cout << s << ": " << x << endl; // printing the result
    }

    return 0;
}