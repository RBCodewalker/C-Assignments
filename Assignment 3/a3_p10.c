/*
CH-230-A
a3_p10.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

float product(float a, float b) // nothing special in this function
{
    float p = a * b; // product of floats
    return p;
}

void productbyref(float a, float b, float *p)
// here we define pointer *p for reference
{
    *p = a * b;  // product in pointer
}

void modifybyref(float *a, float *b)
// we also define the pointers here for reference
{
    *a += 3;
    *b += 11;
}

int main()
{
    float a, b, p;
    
    printf("Enter a float: ");
    scanf("%f", &a);
    printf("Enter another float: ");
    scanf("%f", &b);
    
    printf("First function: %f\n", product(a, b));
    productbyref(a, b, &p);
    printf("Second function: %f\n", p);
    // the result of both first and second functions are equal
    
    if (product(a, b) == p) 
    printf("Both functions give same value\n");
    modifybyref(&a, &b);
    printf("Third function first float: %f\n", a);
    printf("Third function second float: %f\n", b);
    /* there is a slight error in the values if we try for example
    77.123456 and 9.123456 as the floats respectively, the modified
    values are expected to be 80.123456 and 20.123456 but we get
    80.123459 and 20.123455*/
    return 0;
}

