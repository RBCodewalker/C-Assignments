/*
CH-230-A
a4_p1.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float lx, ux, ss;
    scanf("%f", &lx); 
    // entering the required values from the keyboard
    scanf("%f", &ux);
    scanf("%f", &ss);

    for (float x = lx; x <= ux; x += ss)
    {
        double ar = x * x * M_PI;
        // MI_PI refers to the value of pi in the math library
        double pr = 2 * x * M_PI;
        printf("%f", x);  
        /* printing the table of circle for each value of x
        using for loop*/
        printf(" %lf", ar);
        printf(" %lf\n", pr);
    }

    return 0;
}