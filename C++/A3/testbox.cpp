/*
   CH-230-A
   testbox.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "Box.h"

using namespace std;

int main(int argc, char **argv)
{
    //Volbox box;
    
    int n;
    cout << "How many boxes do you have? ";
    cin >> n;

    Volbox *x = new Volbox[2 * n];
    
    double ref1, ref2, ref3;
    for (int i = 0; i < n; i++)
    {
        cout << "Length of box " << (i + 1) << " :: ";
        cin >> ref1;
        x[i].setlength(ref1);

        cout << "Breadth of box " << (i + 1) << " :: ";
        cin >> ref2;
        x[i].setbreadth(ref2);

        cout << "Height of box " << (i + 1) << " :: ";
        cin >> ref3;
        x[i].setheight(ref3);

        x[i].Vol(ref1, ref2, ref3);
    }

    for (int j = 0; j < n; j++)
    {
        x[n + j] = Volbox(x[j]);
    }

    for (int k = 0; k < (2 * n); k++)
    {
        x[k].disp();
    }

    delete x;

    return 0;
}