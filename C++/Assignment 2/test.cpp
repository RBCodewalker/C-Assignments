#include <iostream>
#include <cstdlib>
#include "city.h"

using namespace std;

int main()
{
    City new1;

    string c1, c2;
    int c3;
    double c4;

    cout << "name?";
    getline(cin, c1);
    cout << "mayor?";
    getline(cin, c2);
    cout << "inhabitants?";
    cin >> c3;
    cout << "area?";
    cin >> c4;

    new1.setcityname(c1);
    new1.setinhabs(c3);
    new1.setmayor(c2);
    new1.setarea(c4);

    cout << "city info :" << endl;
    new1.display();

    return 0;
}