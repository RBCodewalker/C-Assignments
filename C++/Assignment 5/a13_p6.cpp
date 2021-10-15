/*
   CH-230-A
   a13_p6.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include <vector>
//#include <stdexcept>
#include <exception>

using namespace std;

int main(int argc, char **argv)
{
    int vect[20];
    for(int t = 0; t < 20; t++) vect[t] = 8; // adding 20 8s to vect vector
    
    vector<int> nums;
    
    // adding the content of vector vect to vector nums
    for(int i = 0; i < 20; i++) nums.push_back(vect[i]);

    // implementing try and catch
    try
    {
        nums.at(20) = 8; // trying to access 21st element using at()
    }
    catch (const out_of_range& x) // exception x of type out_of_reach
    {
        cout << x.what(); // using redefined what to print error
    }

    return 0;
}