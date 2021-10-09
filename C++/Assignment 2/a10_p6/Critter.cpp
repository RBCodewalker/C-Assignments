/*
   CH-230-A
   critter.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */


#include <iostream>
#include "Critter.h"

using namespace std;

double Critter::int_double(int num) // conversion of integer to double
{
  hunger = (num / 10.0); 
  return hunger;
}

int Critter::double_int(double val) // conversion back to integer
{
  hg2 = (val * 10);
  return hg2;
}

// constructor without properties
Critter::Critter() {
  cout << "Calling first constructor!" << endl;
  name = "default_critter";
  hunger = int_double(0);
  boredom = 0;
  height = 5;
}

// constructor with a single property(name)
Critter::Critter(string& newname) {
  cout << "Calling second constructor!" << endl;
  name = newname;
  hunger = int_double(0);
  boredom = 0;
  height = 5;
}

// constructor with all properties
Critter::Critter(string& newname, int newhunger,
int newboredom, double newheight) {
  cout << "Calling last constructor!" << endl;
  name = newname;
  hunger = int_double(newhunger);
  boredom = newboredom;
  height = newheight;
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = int_double(newhunger);
}

void Critter::setheight(double newheight) {
  height = newheight;
}

void Critter::print() {
	cout << "I am " << name << ". I am " << height
  << " feet tall." << " My hunger level is " << double_int(hunger)
  << " and  boredom is " << boredom << "." << endl;
}

int Critter::getHunger()
{
  return double_int(hunger);
}

double Critter::getheight() {
  return height;
}
