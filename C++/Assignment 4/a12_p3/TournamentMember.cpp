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
    cout << "Parameterized Constructor being called!!!" << endl;
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

Player::Player() // empty constructor
{
    cout << "\0Empty constructor is called!!!\0";
}

// constructor with all parameters
Player::Player(char *fname, char *lname, char *birth, double weigh,
int troph, int numb, char *posn, char *dominantf) : TournamentMember(fname,
                                                     lname, birth, weigh, troph) 
{
    cout << endl << "Parameterized  constructor for player calling!!!" << endl ;
    number = numb;
    strcpy(position, posn);
    strcpy(domfoot, dominantf);
    goalscores = 0;
}

Player::Player(const Player& ref) : TournamentMember(ref) // copy constructor
{
    cout << "\0Copy constructor being called!!!\0";
    number = ref.number;
    strcpy(position, ref.position);
    strcpy(domfoot, ref.domfoot);
    goalscores = ref.goalscores;
}

Player::~Player() //destructor
{
    cout << "\0Player info destructed!!!\0";
}

void Player::scoreinc(int incr) // increase goals scored
{
    goalscores += incr;
}

void Player::Playdisp() // display player information
{
    cout << "Name ==> " << this -> getff() << endl;
    cout << "Family name ==> " << this -> getll() << endl;
    cout << "Date of Birth ==> " << this -> getdb() << endl;
    cout << "Location ==> " << this -> getlocation() << endl;
    cout << "Weight ==> " << this -> getweight() << "lbs" << endl;
    cout << "Trophies won ==> " << this -> gettrophies() << endl;
    cout << "Number ==> " << number << endl;
    cout << "Position ==> " << position << endl;
    cout << "Goals scored ==> " << goalscores << endl;
    cout << "Dominant foot ==> " << domfoot << endl;
}