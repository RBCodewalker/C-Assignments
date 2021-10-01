/*
CH-230-A
a6_p7.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

void set3bits(unsigned char a, int b, int c, int d)
{
    int bin[8];
    for (int i = 0; i < 8; i++) bin[i] = (a >> (8 - 1 - i)) & 1;
    bin[8 - b - 1] = 1; // setting the designated bits
    bin[8 - c - 1] = 1;
    bin[8 - d - 1] = 1;
    for (int j = 0; j < 8; j++) printf("%d", bin[j]);
    printf("\n");
}

int main()
{
    unsigned char uc;
    int x, y, z;
    scanf(" %c", &uc);// reading the required parameters
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

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

   printf("After setting the bits: "); 
   set3bits(uc, x, y, z);
   // calling the funtion setting the bits to print in main

    return 0;
}