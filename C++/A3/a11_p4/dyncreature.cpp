/*
   CH-230-A
   dyncreature.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "Creature.h"
#include <string>

using namespace std;

int main()
{ 
    // executing and desplaying the required output
    
    while(7)
    {
      string x;
      cout << "Enter a creature(wizard/hedgehog/goblin) or quit to exit :: ";
      cin >> x;

      if(x == "wizard") // when wizard is entered
      {
        cout << "\nCreating a Wizard.\n";
        Wizard *w = new Wizard;
        w -> run();
        w -> hover();
      }
      else if(x == "hedgehog") // when hedgehog is entered
      {
        cout << "\nCreating a Hedgehog.\n";
        Hedgehog *h = new Hedgehog;
        h -> run();
        h -> dash();
      }
      else if(x == "goblin") // when goblin is entered
      {
        cout << "\nCreating a Goblin.\n";
        Goblin *g = new Goblin;
        g -> run();
        g -> jog();
      }
      else // when exit and any other input is encountered
      {
        exit(1);
      }
    }

    return 0;
} 