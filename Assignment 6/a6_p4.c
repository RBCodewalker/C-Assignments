/*
CH-230-A
a6_p4.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#define INTERMEDIATE // defining intermediate in preprocessor

int main()
{
    int n;
    scanf("%d", &n);

    int x[n], y[n];
    int z = 0;

    // input values
    for (int i = 0; i < n; i++) scanf("%d", &x[i]);
    for (int j = 0; j < n; j++) scanf("%d", &y[j]);

    #ifdef INTERMEDIATE // executed only if INTERMEDIATE is defined
    printf("The intermediate product values are:\n");
    for (int k = 0; k < n; k++) printf("%d\n", x[k]*y[k]);
    #endif

    for (int l = 0; l < n; l++) z += x[l]*y[l];
    printf("The scalar product is: %d", z); // printing the  scalar product

    return 0;
}