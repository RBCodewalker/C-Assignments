/*
   CH-230-A
   a13_p5.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {}
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C
/* there was an error here as there occured implicit deletion of class D 
   because the class was not well defined without constructors */
{
    public:
        D() : A(10), B(), C() {};
        // created a constructor for child class D to solve the error
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

