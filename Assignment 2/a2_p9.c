/*
CH-230-A
a2_p9.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char q;
    scanf(" %c", &q);
    if (q > 47 && q<58)   // digits have ASCII value ranging from 48 to 57
    {
        printf("%c is a digit\n", q);
    }
    else if (q > 64 && q < 91)    // capital letters have ASCII value ranging from 65 to 90
    {
        printf("%c is a letter\n", q);
    }
    else if (q > 96 && q < 123)    // small letters have ASCII value ranging from 95 to 122
    {
        printf("%c is a letter\n", q);
    }
    else                 // remaining ASCII numbers represent other symbols
    {
        printf("%c is some other symbol\n", q);
    }
    

    return 0;
}