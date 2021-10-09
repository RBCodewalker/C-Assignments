/*
   CH-230-A
   Guessing_game.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */


#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    
    int privat = rand() % 100 + 1; 
    // selecting a random number between 1 and 100
    int guess;
    char choose = 'a';

    cout << "                       WELCOME TO THE GUESSING GAME. GOOD LUCK!!!";
    
    while (choose != 'q')
    {
        cout << endl << "Your guess? ";
        cin >> guess;
        if(guess == privat) // if right number is guessed the program ends
        {
            cout << "WOW! You Guessed it!!!!!!" << endl;
            break;
        }
        else
        {
            if(guess > privat)
            {
                cout << "Too High!!!" << endl;
            }
            else
            {
                cout << "Too Low!!!" << endl;
            }

            // asking the player if s/he wants to try again or quit
            cout << "Press 'a' to try again and 'q' to quit. => ";
            cin >> choose;
        }
    }

    cout << "Thank you for playing." << endl;

    return 0;
}