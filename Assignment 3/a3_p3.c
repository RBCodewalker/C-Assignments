/*
CH-230-A
a3_p3.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm)       // defining the function
{
    float d = (float) cm / 100000;   
    // actual calculation is done here
    printf("Result of conversion: %f\n", d);
    return d;
}
int main()
{
    int v;
    scanf("%d", &v);
    convert(v);           
    // calling the above function to convert variable v
    return 0;
}