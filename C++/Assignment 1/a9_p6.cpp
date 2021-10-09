/*
   CH-230-A
   a9_p6.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
//#include <string>

using namespace std;

int myfirst(int a[5]) // FUNCTION TO FIND THE FIRST POSITIVE EVEN INTEGER
{
    int re1;
    for(int i = 0; i < 5; i++)
    {
        if((a[i] > 0) && (a[i] % 2 == 0))
        {
            re1 = a[i];
            break;
        }
    }
    if(re1 == 0) re1 = -1;
    return re1;
}

double myfirst(double b[5])
// FUNCTION TO FIND THE FIRST NEGATIVE DOUBLE WITHOUT FRACTIONAL PART
{
    double re2;
    for(int i = 0; i < 5; i++)
    {
        if((b[i] < 0) && ((b[i] - (int)b[i]) == 0))
        {
            re2 = b[i];
            break;
        }
    }
    if(re2 == 0.0) re2 = -1.1;
    return re2;   
}

char myfirst(char c[5]) // FUNCTION TO FIND THE FIRST CONSONANT ALPHABET
{
    char re3;
    for(int i = 0; i < 5; i++)
    {
        if(c[i] != 'a' || 'e' || 'i' || 'o' || 'u')
        {
            re3 = c[i];
            break;
        }
    }
    if(re3 == '\0') re3 = '0';
    return re3;
}

int main(int argc, char **argv)
{
    int x[5] = {1, 2, 3, -4, -5}; // CALLING FIRST FUNCTION
    cout << "Integer Implementation => " << myfirst(x) << endl;

    double y[5] = {1.1111, 2.3333, -4.000, -7.000, 9.99};
    // CALLING SECOND FUNCTION
    cout << "Double Implementation => " << myfirst(y) << endl;

    char z[5] = {'r', 'a', 'j', 'd', 'e'}; // CALLING THIRD FUNCTION
    cout << "Char Implementation => " << myfirst(z) << endl;

    return 0;
}