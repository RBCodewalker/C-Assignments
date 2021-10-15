/*
   CH-230-A
   a13_p4.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  virtual public A
{
public:
  B()  { setX(10); }
};
 
class C:  virtual public A  // added virtual keyword to solve the error
{
public:
  C()  { setX(20); }
};

class D: public B, public C {
};
 
int main()
{
    D d;
    d.print(); /* there was an ambiguous error here because there were two
               values set from two parent classes to the child class D*/
    return 0;
}

/* the virtual keyword in the parent classes of class D solved the error here
   because this way, only one of the two values gets displayed when there is
   data collision. */