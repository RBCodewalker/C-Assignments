/*
   CH-230-A
   Creature.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::~Creature() {}  // Creature destructor

Creature::Creature(): distance(10) {} // Creature constructor

void Creature::run() const // Creature method
{ 
    cout << "running " << distance << " meters!\n";
}

Wizard::~Wizard()  // Wizard destructor
{
    cout << "\nDestructing Wizard object!!!" << endl;;
}

Wizard::Wizard() : distFactor(3) // Wizard constructor
{}  

void Wizard::hover() const  // Wizard method
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Hedgehog::~Hedgehog() // Hedgehog destructor
{
    cout << "\nDestructing Hedgehog object!!!" << endl;
}

Hedgehog::Hedgehog() : speed(100)  // Hedgehog constructor
{}  

void Hedgehog::dash() const  // Hedgehog method
{
    cout << "dashing " << (speed * distance) << " meters!\n";
}

Goblin::~Goblin()  // Goblin destructor
{
    cout << "\nDesctructing Goblin object!!!" << endl;
}

Goblin::Goblin() : slowdown(2)  // Goblin constructor
{}  

void Goblin::jog() const  // Goblin method
{
    cout << "jogging " << (distance / slowdown) << " meters!\n";
}