/*
   CH-230-A
   critter.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */


#include <iostream>
#include "Critter.h"

using namespace std;

// constructor without properties
Critter::Critter() {
  cout << "Calling first constructor!" << endl;
  name = "default_critter";
  hunger = 0;
  boredom = 0;
  height = 5;
}

// constructor with a single property(name)
Critter::Critter(string& newname) {
  cout << "Calling second constructor!" << endl;
  name = newname;
  hunger = 0;
  boredom = 0;
  height = 5;
}

// constructor with all properties
Critter::Critter(string& newname, int newhunger,
int newboredom, double newheight) {
  cout << "Calling last constructor!" << endl;
  name = newname;
  hunger = newhunger;
  boredom = newboredom;
  height = newheight;
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

//void Critter::setgender(string& newgender) {
//  gender = newgender;
//}

//void Critter::setheight(double newheight) {
//  height = newheight;
//}

void Critter::print() {
	cout << "I am " << name << ". I am " << height
  << " feet tall." << " My hunger level is " << hunger
  << " and  boredom is " << boredom << "." << endl;
}

//int Critter::getHunger() {
//	return hunger;
//}

//double Critter::getheight() {
//  return height;
//}