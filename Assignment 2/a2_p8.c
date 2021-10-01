/*
CH-230-A
a2_p8.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int r;
    scanf("%d", &r);
    int s = r % 2;   // remainder when divided by 2
    int t = r % 7;    // remainder when divided by 7
    if (s == 0 && t == 0)    // remainder 0 means exactly divisible so we put the condition for both remainders to be 0
    { 
        printf("The number is divisible by 2 and 7\n");
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }

     return 0;   
}