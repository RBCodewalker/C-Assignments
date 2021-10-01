/*
CH-230-A
a5_p1.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

void patt(int n, char ch) 
// function to perform the pattern
{
    for (int i = n; i >= 1 ; i--) 
    // using nested loop for the pattern
    {
       for (int j = 1; j <= i; j++)
       {
           printf("%c", ch);
       }
       printf("\n");
    }
}

int main(int argc, char *argv[])
{
    int n;
    char ch;

    scanf("%d", &n);
    scanf(" %c", &ch);

    patt(n, ch); 
    // calling the function to create the triange with given parameters

    return 0;
}