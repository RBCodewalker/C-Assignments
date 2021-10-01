/*
CH-230-A
a6_p3.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

// macro to find minimum
#define mnt(x,y) ((x) < (y) ? (x) : (y))
#define mn(x, y, z) (mnt(mnt(x,y), z))

// macro to find maximum
#define mxt(x,y) ((x) > (y) ? (x) : (y))
#define mx(x, y, z) (mxt(mxt(x,y), z))

// macro to calculate midrange

#define mr(x, y, z) (((double)(mn(x, y, z) + (double)mx(x, y, z)) / 2))

int main()
{
    int a, b, c;
    scanf("%d", &a); // input values
    scanf("%d", &b);
    scanf("%d", &c);

    printf("The mid-range is: %.6f\n", mr(a, b, c));
    // printing the result

    return 0;
}