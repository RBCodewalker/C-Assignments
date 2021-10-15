/*
   CH-230-A
   a13_p1.cpp
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    
    //char bufr[100];

    string userfile; //user inputs filename
    string convfile;
    string ref;
    cout << "Enter a file name: ";
    cin >> userfile;
    
    int len = userfile.length();
    for(int i = 0; i < len; i++) // changing filename
    {
        if(userfile[i] == '.')
        {
            convfile += "_copy";
        }
        convfile += userfile[i];
    }
    
    ifstream input;  // accessing the input file using c++ input file stream
    input.open(userfile);
    if(!input.good())
    {
		cerr << "Error opening input file " << endl;
		exit(1);
	}
    
    ofstream output; // creating output file using c++ output file stream
    output.open(convfile);
    if (!output.good())
    {
		cerr << "Error opening output file" << endl;
		exit(2);
	}

    while(getline(input, ref))
    // copying contents of input file in the output file
    {
        output << ref << endl;
    }
    
    return 0;
}