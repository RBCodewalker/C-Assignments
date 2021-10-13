/*
   CH-230-A
   TournamentMember.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H
#include <cstring>

using namespace std;

class TournamentMember
{
    private:
        char ff[36]; //first name
        char ll[36]; // last name
        char db[11]; // date of birth
        static char location[50]; // location
        double weight; // weight
        int trophies; // no. of trophies won
    
    public:
        TournamentMember(); //constructor
        TournamentMember(char*, char*, char*, double, int);
        // parameterized
        TournamentMember(const TournamentMember&); //copy constructor
        ~TournamentMember(); //destructor
        void changelocation(char*); // to change the location
        // defining all the setters
        void setff(char *firstn)
        {
            strcpy(ff, firstn);
            ff[strlen(ff) + 1] = '\0';
        }

        void setdb(char *dob)
        {
            strcpy(db, dob);
        }

        void setll(char *lastn)
        {
            strcpy(ll, lastn);
        }

        void setweight(double wt)
        {
            weight = wt;
        }

        void settrophies(int trp)
        {
            trophies = trp;
        }

        // defining all the inline getters
        char *getll()
        {
            return ll;
        }

        char *getff()
        {
            return ff;
        }

        char *getdb()
        {
            return db;
        }

        double getweight()
        {
            return weight;
        }

        int gettrophies()
        {
            return trophies;
        }
        
        char *getlocation()
        {
            return location;
        }

        void disp(); // printing method
};

class Player : public TournamentMember
{
    private:
        int number;
        char position[30];
        int goalscores;
        char domfoot[7];
    
    public:
        Player(); // empty constructor
        // parameterized constructor
        Player(char*, char*, char*, double, int, int, char*, char*);
        Player(const Player&); // copy constructor
        ~Player(); // destructor

        //inline setters and getters
        void setnumber(int num)
        {
            number = num;
        }
        int getnumber()
        {
            return number;
        }

        void setposition(char *pos)
        {
            strcpy(position, pos);
        }
        char getposition()
        {
            return *position;
        }

        void setdomfoot(char *df)
        {
            strcpy(domfoot, df);
        }
        char getdomfoot()
        {
            return *domfoot;
        }

        int getgoalscores()
        {
            return goalscores;
        }

        void scoreinc(int); // increase goals scored
        
        void Playdisp(); // display player info
};

#endif