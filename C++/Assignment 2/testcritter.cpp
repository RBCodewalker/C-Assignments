/*
   CH-230-A
   testcritter.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */


#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name, gender;
	int hunger;
	double height;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	cout << "Gender: ";
    cin >> gender; // asking to input gender
    c.setgender(gender);
	c.setName(name);
	cout << "Height(feet): ";
	cin >> height; // asking to input height
	c.setheight(height);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}