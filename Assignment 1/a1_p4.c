/*
CH-230-A
a1_p4.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int x = 17;
    int y = 4;
    int s = x + y;
    int p = x * y;
    int d = x - y;
    float f = (float)x / y;
    int r = x % y;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("sum=%d\n", s);
    printf("product=%d\n", p);
    printf("difference=%d\n", d);
    printf("division=%f\n", f);
    printf("remainder of division=%d\n", r);
    
    return 0;
}