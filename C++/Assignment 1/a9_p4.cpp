/*
   CH-230-A
   a9_p4.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include <string>

using namespace std;

int mycount(int r, int b) // function for difference
{
    return b - r;
}

int mycount(char s, string c) // char occurence counter function
{
    int cc = 0;
    int i = 0;
    while (i < (int)c.size())
    {
        if (c[i] == s) cc++;
        i++;
    }

    return cc;
}

int main(int argc, char **argv)
{
    int wv, ww;
    char cv, ak; string sr;
    
    cout << "Which operation do you want to perform?" << endl;
    cout << "A. Find difference of integers" << endl;
    cout << "B. Count occurence of character in string" << endl << "A/B == ";
    
    cin >> ak;
    if (ak == 'a' || ak == 'A')
    {
        cout << "First number: ";
        cin >> wv;
        cout << "Second number: ";
        cin >> ww;
        // PRINT THE DIFFERENCE BY CALLING FIRST FUNCTION
        cout << "The difference is " << mycount(wv, ww) << "." << endl;
    }
    else if ((ak == 'b') || (ak == 'B'))
    {
        cout << "Enter character to search: ";
        cin >> cv;
        getchar();
        cout << "Enter string to search the char in: ";
        getline(cin, sr);
    // PRINT THE OCCURENCE OF CHAR BY CALLING THE SECOND OVERLOADED FUNCTION
        cout << cv << " occured " << mycount(cv, sr) << " times.";
    }

    return 0;
}