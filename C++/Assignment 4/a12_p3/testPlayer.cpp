/*
   CH-230-A
   testPlayer.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include "TournamentMember.h"
#include <cstring>

int main(int argc, char **argv)
{
    char loc[50] = "Hamburg"; // new location to change to
    
    // Player 1 Information
    char f1[36] = "Toni\0";
    char l1[36] = "Kroos";
    char d1[11] = "1990-01-04";
    char p1[30] = "Defence";
    char r1[7] = "Right";
    double w1 = 171.91;
    int n1 = 8;
    int t1 = 30;
    Player one(f1, l1, d1, w1, t1, n1, p1, r1);
    one.changelocation(loc);
    one.scoreinc(83);
    one.Playdisp();
    
    // Player 2 Information
    char f2[36] = "James\0";
    char l2[36] = "Rodriguez";
    char d2[11] = "1991-07-12";
    char p2[30] = "Midfield";
    char r2[7] = "Right";
    double w2 = 169.75;
    int n2 = 19;
    int t2 = 20;
    Player two(f2, l2, d2, w2, t2, n2, p2, r2);
    two.scoreinc(122);
    two.Playdisp();

    // Player 3 Information
    char f3[36] = "Diego\0";
    char l3[36] = "Maradona";
    char d3[11] = "1960-10-30";
    char p3[30] = "Striker";
    char r3[7] = "Left";
    double w3 = 167.67;
    int n3 = 10;
    int t3 = 100;
    Player three(f3, l3, d3, w3, t3, n3, p3, r3);
    three.scoreinc(349);
    three.Playdisp();

    // copy constructor test
    Player four(three);
    four.Playdisp();
    
    return 0;
}