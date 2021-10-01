/*
CH-230-A
a3_p6.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g)
{
    float conv = ((float)kg + ((float)g / 1000)) * 2.2;  
    // actual conversion of unit of mass to pounds
    printf("Result of conversion: %f\n", conv);
    return conv;
}
int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    to_pounds(x, y);   // calling the function of conversion

    return 0;
}