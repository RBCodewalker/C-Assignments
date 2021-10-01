/*
CH-230-A
a6_p2.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#define lsb(y) ((y) & 1) // macro to find the least significant bit

int main()
{
    unsigned char x;
    scanf(" %c", &x); // reading unsigned char from keyboard

    // printing the result
    printf("The decimal representation is: %d\n", x);
    printf("The least significant bit is: %d\n", lsb(x));

    return 0;
}