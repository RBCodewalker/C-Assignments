/*
   CH-230-A
   a9_p9.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    char strgs[17][11] = {"computer", "television", "keyboard", "laptop",
                          "mouse", "hello", "more", "feel", "close", "legend",
                          "legendary", "really", "guess", "member", "price", 
                          "mess", "inside"};
                          // entering the words for guessing
    
    int tries = 0, x = 1; // tries and the choice parameters
    while(x != 0)
    {
        char gue[11];
        char su[5] = "quit";
        string cho = "yes";
        int ran = 0;
        ran = ((rand() % 17) + 1);
        
        cout << "Here is a word from the array => ";
        cout << strgs[ran] << endl; // a random word from the array
        
        for (int i = 0; i < ran; i++)
        {
            char v = (strgs[ran][i]);
            if (v == 'a' || v == 'e' || v == 'i' || v =='o' || v == 'u')
            {
                cout << "_"; // vowel letters replaced by '_'
            }
            else
            {
                cout << strgs[ran][i]; // other letters printed
            }
        }
        
        
        
        while(x != 0)
        {
            cout << endl << "Your guess? "; // asking for the player's guess
            cin >> gue;
            tries++; // increase no. of tries
    
            if (gue == su) x = 0; // program ends if quit is entered
            if (gue == strgs[ran])
            {
                cout << "AWESOME! You Guessed it!!!" << endl;
                cout << "No. of tries = " << tries << endl;
                cout << endl << "You want to play again? (yes/no)";
                cin >> cho; // asking the player if s/he wants to continue
                tries = 0;
                if (cho == "no") x = 0; // end program if no
            }
            else
            {
                cout << "Oops! Close...Try again!!!" << endl;
            }
        } 
    }
return 0;
}