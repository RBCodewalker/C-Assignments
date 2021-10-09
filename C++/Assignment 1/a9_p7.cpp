/*
   CH-230-A
   a9_p7.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>

using namespace std;

void swapping(int &my1, int &my2) // swap ints
{
  int x = my2;
  my2 = my1;
  my1 = x;
}

void swapping(float &my3, float &my4) // swap floats
{
  float y = my4;
  my4 = my3;
  my3 = y;
}

void swapping(const char *&my5, const char *&my6) // swap char pointers
{
  const char *z = my6;
  my6 = my5;
  my5 = z;
}

int main(void) // NO CHANGES MADE TO THE ORIGINAL MAIN FUNCTION
{
  int a = 7, b = 15;
  float x = 3.5, y = 9.2;
  const char *str1 = "One";
  const char *str2 = "Two";
  
  cout << "a=" << a << ", b=" << b << endl;
  cout << "x=" << x << ", y=" << y << endl;
  cout << "str1=" << str1 << ", str2=" << str2 << endl;
  
  swapping(a, b);
  swapping(x, y);
  swapping(str1, str2);
  
  cout << "a=" << a << ", b=" << b << endl;
  cout << "x=" << x << ", y=" << y << endl;
  cout << "str1=" << str1 << ", str2=" << str2 << endl;
  
  return 0;
}