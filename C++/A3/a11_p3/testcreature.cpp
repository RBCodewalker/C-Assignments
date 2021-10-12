/*
   CH-230-A
   testcreature.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{ 
    // executing and desplaying the required output
    
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Hedgehog.\n";
    Hedgehog h;
    h.run();
    h.dash();

    cout << "\nCreating a Goblin.\n";
    Goblin g;
    g.run();
    g.jog();

    return 0;
} 