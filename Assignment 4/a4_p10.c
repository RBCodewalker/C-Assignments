/*
CH-230-A
a4_p10.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, 
float *pwr, float *invb)
{
    // calculation within the pointer
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1 / b;
}

int main(int args, char *argv[])
{
    // function to try the above functions's correctness
    float a, b, prod, div, pwr, invb;
    printf("Enter a float: ");
    scanf("%f", &a);
    printf("Enter another float: ");
    scanf("%f", &b);

    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    /* calling the function with the pointers
    whose address holds the values we require*/
    printf("%f %f %f %f", prod, div, pwr, invb);
    /* printing the values which are now stored on the
    variables we defined in this function */  
}