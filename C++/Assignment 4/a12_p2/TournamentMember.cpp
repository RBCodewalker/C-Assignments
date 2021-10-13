/*
   CH-230-A
   TournamentMember.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "TournamentMember.h"
#include <cstring>

using namespace std;

char TournamentMember::location[50] = "Kathmandu";

TournamentMember::TournamentMember() // default constructor
{
    cout << "\0Default Constructor is being called!!!" << endl;;
    strcpy(ff, "noname");
    strcpy(ll, "nolname");
    strcpy(db, "0000-00-00");
    weight = 0.0;
    trophies = 0;
}

TournamentMember::TournamentMember(char *fn, char *ln, char *dfb,
double wt, int tp)
{
    cout << "\0Parameterized Constructor being called!!!" << endl;
    strcpy(ff, fn);
    strcpy(ll, ln);
    strcpy(db, dfb);
    weight = wt;
    trophies = tp;
}

TournamentMember::TournamentMember(const TournamentMember& ref)
// copy constructor
{
    cout << endl << "Copy constructor is being called!!!" << endl;
    strcpy(ff, ref.ff);
    strcpy(ll, ref.ll);
    strcpy(db, ref.db);
    weight = ref.weight;
    trophies = ref.trophies;
}

TournamentMember::~TournamentMember() // deconstructor
{
    cout << endl << "Destructor is called." << endl;;
}

void TournamentMember::changelocation(char *chg) // method to change location
{
    strcpy(location, chg);
}

void TournamentMember::disp() // display method
{
    cout << ff << " " << ll << " was born in " << db << ". S/he weighs "
    << weight << " pounds and has won " << trophies << " trophies. S/he is in "
    << location << ".";
}