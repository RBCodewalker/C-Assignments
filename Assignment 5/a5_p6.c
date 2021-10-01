/*
CH-230-A
a5_p6.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float *x;
    int a, *y;
    scanf("%d", &a);
    
    x = (float*) malloc(sizeof(float) * a); // Dynamically allocating memory
    if (x == NULL)
    // program cannot proceed if the memory allocation fails
    {
        printf("Sorry, memory allocation was not successful");
        exit(1);
    }
    
    for (int j = 0; j < a; j++) scanf("%f", &x[j]); // entering values

    for (int i = 0; i < a; i++)
    {
        if (x[i] < 0)
        {
            y = &i; // storing the number in pointer y
            break;
        }
    }

    printf("Before the first negative value: %d elements", *y);
    // printing the result

    free(x);

    return 0;
}