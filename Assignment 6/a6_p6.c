/*
CH-230-A
a6_p6.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    unsigned char uc;
    scanf(" %c", &uc);

    printf("The decimal representation is: %d\n", uc);
    // decimal representation

    printf("The binary representation is: ");
    for (int i = 0; i < 8; i++)
    {
        if (uc & (1 << (8 - 1 -i))) 
        // use of bitwise operator to print the binary representation
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}