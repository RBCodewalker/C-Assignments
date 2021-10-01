/*
CH-230-A
a5_p4.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size)
// function to perform the division
{
    for (int i = 0; i < size; i++)
    {
        printf("%.3f ", arr[i] / 5);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    float *a;
    int n;

    printf("How many floats do you want? ");
    scanf("%d", &n);

    a = (float*) malloc(sizeof(float) * n); // Dynamically allocating memory
    
    if (a == NULL)
    /* in case the memory allocation fails, program terminates
    with an error message*/
    {
        printf("Sorry, memory was not allocated!\n");
        exit(1);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter a float: ");
        scanf("%f", &a[i]);
        // entering the values for division
    }

    printf("Before:\n");
    int j = 0;
    while(j < n)
    {
        printf("%.3f ", a[j]);
        j++;
    }    
    printf("\nAfter:\n");
    divby5(a, n);
// printing the required output
    free(a); // freeing the allocated memory
    return 0;   
}