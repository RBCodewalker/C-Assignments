/*
   CH-230-A
   critter.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */


#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	std::string gender;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setgender(std::string& newgender); // setter for gender
	void setheight(double newheight); // setter for height
	// getter method
	int getHunger();
	double getheight(); // getter for height
	// service method
	void print();
};