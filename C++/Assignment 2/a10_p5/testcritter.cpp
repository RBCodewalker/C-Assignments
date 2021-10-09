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
	string random = "Sandy Saul";

	Critter fst; // the fst constructor
	fst.setHunger(2);
    fst.print(); cout << endl;

	Critter snd(random); // the second constructor
	snd.setHunger(2);
	snd.print(); cout << endl;

	Critter trd(random, 10, 20); // the third constructor without height
    trd.setHunger(2);
	trd.print(); cout << endl;

	Critter fth(random, 10, 20, 11.7); // the third constructor with height
	fth.setHunger(2);
	fth.print(); cout << endl;

	Critter fith(random, 10, 11, 12.5, 50.5);// the last constructor with thirst
	fith.print(); cout << endl;

	return 0; 
}