/*
   CH-230-A
   a13_p7.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include <exception>

using namespace std;

class OwnException : public exception
// creating a new exception class derived from pre-defined exception class
{
    public:
        OwnException(string) {} //constructor
        const char* what()
        // overloading the what method from the exception class
        {
          return "Own Exception\n";
          // message to print in case of this exception
        }
};

void error(int er)
{
    switch (er)
  // using switch case to throw the corresponding value for each exception type
    {
      case 1:
        throw 'a';
        break;
      case 2:
        throw 12;
        break;
      case 3:
        throw true;
        break;
      default:
        throw OwnException("Default case Exception");
    }
}

int main(int argc, char **argv)
{
    try
    {
      // calling the function by with a parameter value
      error(77);
      //error(1);
      //error(2);
      //error(3);
    }
    catch(char x) // for char type
    {
      cerr << "Caught in main: " << x;
    }
    catch(int y) // for int type
    {
      cerr << "Caught in main: " << y;
    }
    catch(bool z) // for bool type
    {
      cerr << "Caught in main: " << z;
    }
    catch(OwnException& a) // for OwnException type
    {
      cerr << a.what();
    }
    
    return 0;
}