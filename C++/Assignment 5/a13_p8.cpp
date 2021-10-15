/*
   CH-230-A
   a13_p8.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include <vector>
#include <exception>

using namespace std;

class Motor : public exception // motor class derived from exception
{
    public:
        Motor() {}; // constructor
    
        const char* what() // overloading what method
        {
            const char* x = "This motor has problems";
            return x;
        }
};

class Car : public Motor // car class derived from motor
{
    public:
        Car() : Motor() {}; // constructor call
};

class Garage : public Car // garage class derived from car
{
    public:
        Garage(const char* inst) // printing error message in case of the
                                // exception.
        {
            cout << inst << endl;
        }
        
        Garage() try : Car() // implementing function-level try block
        {
            throw Garage("The car in this garage has problems with the motor");
        }
        catch (Garage& e)
        {
            cerr << e.what() << '\n';
        } 
};

int main(int argc, char **argv)
{
    //Garage instance;
    try
    {
        Garage instance;
    }
    catch(Garage& e) // checking for the exception
    {
        cerr << e.what() << '\n';
    }
    
    return 0;
}