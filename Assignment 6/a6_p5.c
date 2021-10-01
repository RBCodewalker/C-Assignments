/*
CH-230-A
a6_p5.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned char uc;
    scanf(" %c", &uc);

    printf("The decimal representation is: %d\n", uc);
    // decimal representation

    printf("The backwards binary representation is: ");
    for (int i = 0; i < (log2(uc)); i++)
    // log of base 2 gives the no. of bits in the binary representation
    {
        if (uc & (1 << i)) 
        // use of bitwise operator to print binary representation in reverse
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