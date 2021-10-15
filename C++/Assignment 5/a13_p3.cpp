/*
   CH-230-A
   a13_p3.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    cout << "How many files would you like to concatenate? ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string userfile;
        
        cout << "Enter a file name: ";
        cin >> userfile;
        
        ifstream input;  // accessing the input file using c++ input file stream
        input.open(userfile);
        if(!input.good()) // checking the success of file opening
        {
		    cerr << "Error opening input file " << endl;
		    exit(1);
	    }
        
        ofstream output; // creating output file using c++ output file stream
        output.open("concatn.txt", ios::app);
        // ios::app appends the contents into our output file
        if (!output.good()) // checking if file correctly opened
        {
		    cerr << "Error opening output file" << endl;
		    exit(2);
	    }
        string ref;
        while(getline(input, ref))
        // copying contents of input file in the output file
        {
            output << ref << endl;
        }

        output << "\n";

        input.close(); // closing the input file
        output.close(); //closing the output file

    }
    
    return 0;
}