/*
CH-230-A
a4_p9.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n)
{
    int big = arr[0], small = arr[0];

    for (int i = 0; i < n; i++)
    // loop to update the largest and smallest number from the array
    {
        if (arr[i] > big) big = arr[i];
        if (arr[i] < small) small = arr[i];
    }
    int pr = big * small;// calculation of product
    
    return pr;
}

int main(int args, char *argv[])
{
    int *arr, n;
    printf("How many integers would you like to have in the array? ");
    scanf("%d", &n);
    
    arr = (int*) malloc(sizeof(int) * n); // Dynamically allocating memory
    if (arr == NULL)
    /* in case the memory allocation fails, program terminates
    with an error message*/
    {
        printf("\nSorry, memory was not allocated!");
        exit(1);
    }

    for(int i = 0; i < n; i++)
    // asking to enter the values for the array
    {
        printf("\nEnter an integer: ");
        scanf("%d", &arr[i]);
    }
    
    int pr = prodminmax(arr, n);
    printf("The product of the smallest and largest elements is: %d\n", pr);

    free(arr);

    return 0;
}