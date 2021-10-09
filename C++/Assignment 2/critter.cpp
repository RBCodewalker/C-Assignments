/*
   CH-230-A
   critter.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */


#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setgender(string& newgender) {
  gender = newgender;
}

void Critter::setheight(double newheight) {
  height = newheight;
}

void Critter::print() {
	cout << "I am " << name << ". I am a " << gender << " and I am " << height
  << " feet tall." << " My hunger level is " << hunger << ". " << endl;
}

int Critter::getHunger() {
	return hunger;
}

double Critter::getheight() {
  return height;
}