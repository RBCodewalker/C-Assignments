/*
   CH-230-A
   a9_p8.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>

using namespace std;

void subtract_max(int a, int *myarr)
{
    int max = myarr[0];
    for (int  i = 0; i < a; i++) // finding the maximum element
    {
        if (myarr[i] > max) max = myarr[i];
    }
    for (int  i = 0; i < a; i++) myarr[i] -= max; 
    // subtracting maximum from every elements in the array

}

void deallocate(int *bss)
{
    delete [] bss; // deallocation of memory
}

int main()
{
    int n, *x;
    cout << "How many numbers do you want in the myarray? ";
    cin >> n;

    x = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Number in position " << i << " : ";
        cin >> x[i]; // taking input for the array
    }

    cout << "After subtracting the maximum ==>" << endl;
    subtract_max(n, x); // calling first function
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << endl;
    }

    deallocate(x); // calling second function
    return 0;
}