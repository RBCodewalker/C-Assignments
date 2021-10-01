/*
   CH-230-A
   a8_p8.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int n, x = 0;
    char chr;
    FILE *FP; // defining file pointer

    char inputfile[100];
    fgets(inputfile, 100, stdin); // input the file name
    inputfile[strlen(inputfile) - 1] = '\0';
    
    FP = fopen(inputfile, "r"); // open the file for reading
    if (FP == NULL) // if file opening is not successful
    {
        printf("!!!File opening failed!!!\n");
    }

    char end[10] = " ,?!.\t\r\n";
    while((chr = getc(FP)) != EOF)
    {
        if(x == 1)
        // using flag to prevent counting same word twice
        {
            if(strchr(end, chr)) continue;
            x = 0;
            continue;
        }
        if(strchr(end, chr))
        {
            n += 1; // increasing word count
            x = 1;
        }
    }    
    // printing the result
    printf("The file contains %d words.\n", n);
    
    return 0;
}