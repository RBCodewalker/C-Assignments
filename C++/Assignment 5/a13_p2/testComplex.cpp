/*
   CH-230-A
   testComplex.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "Complex.h"
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
	Complex a, b, c, d, e;
    
    // READING COMPLEX NUMBERS FROM THE INPUT FILES
    ifstream num1;
    num1.open("in1.txt");
    if(!num1.good()) // IN CASE FILE OPENING FAILS
    {
		cerr << "Error opening input file " << endl;
		exit(1);
	}
    ifstream num2;
    num2.open("in2.txt");
    if(!num2.good()) // IN CASE FILE OPENING FAILS
    {
		cerr << "Error opening input file " << endl;
		exit(2);
	}
    
    num1 >> a; /* COPYING THE NUMBERS TO OBJECTS IN COMPLEX CLASS
                  TO PERFORM REQUIRED TASKS */
    num2 >> b;

    c = a + b; // PERFORMING REQUIRED OPERATIONS WITH THE COMPLEX NUMBERS
    d = a - b;
    e = a * b;

    ofstream nump; // OPENING OUTPUT FILE TO PRINT THE ANSWERS
    nump.open("output.txt");
    if(!nump.good()) // IN CASE FILE OPENING FAILS
    {
		cerr << "Error opening input file " << endl;
		exit(3);
	}

    // RESULT OF THE OPERATIONS ARE DISPLAYED ON THE SCREEN
    cout << "Sum of the complex numbers is: :" << c << endl;
    cout << "Difference between the complex numbers is: :" << d << endl;
    cout << "Product of the complex numbers is: :" << e << endl;

    // RESULT IS ALSO PRINTED IN THE OUTPUT FILE
    nump << "Sum of the complex numbers is: :" << c << endl;
    nump << "Difference between the complex numbers is: :" << d << endl;
    nump << "Product of the complex numbers is: :" << e << endl;

    num1.close(); // CLOSING ALL THE OPENED FILES
    num2.close();
    nump.close();
    
    return 0;

}