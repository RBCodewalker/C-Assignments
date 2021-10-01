/*
CH-230-A
a3_p1.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float m;
    int n;
    scanf("%f", &m);
    scanf("%d", &n);
    while (n <= 0) {         // we don't want the integer to be negative or zero, so we accept only valid integer
    printf("Input is invalid, reenter value\n");
    scanf("%d", &n);
    }
    for (int i = 1; i <= n; i++){    //loop for printing m n times
        printf("%f\n", m);
    }
    return 0;
}
