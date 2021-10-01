/*
CH-230-A
a6_p1.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#define swp(o, t, typ) {typ = o; o = t; t = typ;}
// use of macro for swapping

int main()
{
    int r, s, x;
    double j, k, y;

    // input the values for swapping
    scanf("%d", &r);
    scanf("%d", &s);
    scanf("%lf", &j);
    scanf("%lf", &k);

    // printing the required result
    printf("After swapping:\n");
    swp(r, s, x);
    printf("%d\n", r);
    printf("%d\n", s);
    swp(j, k, y);
    printf("%.6f\n", j);
    printf("%.6f\n", k);

    return 0;
}

