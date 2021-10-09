/*
   CH-230-A
   City.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <string>

class City // defining class city
{
  private:   // publicly unavailable data
      std::string cname;
      int pop;
      std::string may;
      double surf;

public:    // publicly visible data
    //setters
    void setcityname(std::string& name);
    void setinhabs(int inhabs);
    void setmayor(std::string& mayor);
    void setarea(double area); 
    
    //getters
    int getinhabs();
    double getarea();
    
    //printing method
    void display();
};