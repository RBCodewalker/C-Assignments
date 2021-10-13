/*
   CH-230-A
   testTournamentMember.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "TournamentMember.h"
#include <cstring>

int main(int argc, char **argv)
{
  char choice, fin[36], lan[36], dobr[11], nloc[50];
  int trop; double weigh;
  
  // asking for the input
  cout << "First name? ";
  cin >> fin; fin[strlen(fin) + 1] = '\0';
  cout << "Last name? ";
  cin >> lan;
  cout << "Date of birth(yyyy-mm-dd)? ";
  cin >> dobr;
  cout << "Weight(pounds)? ";
  cin >> weigh;
  cout << "Trophies won? ";
  cin >> trop;
  cout << "Change location?(y/n) ";
  cin >> choice;

  if(choice == 'y' || choice == 'Y') // in case location is to be changed
  {
    cout << "New location?";
    cin >> nloc;
  }

  TournamentMember first(fin, lan, dobr, weigh, trop);
  if(choice == 'y' || choice == 'Y') first.changelocation(nloc);
  first.disp();

  TournamentMember second(first);
  second.disp();
  return 0;
}