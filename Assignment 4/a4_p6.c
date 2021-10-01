/*
CH-230-A
a4_p6.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void large_nums(int *nums, int n)
{
    int *largest = nums; // assigning first element
    int *snd_largest = &nums[1]; // assigning second element
    int x;
    if(*largest < *snd_largest)
    // if largest is smaller than second largest, then values swap 
    {
    x = *largest;
    *largest = *snd_largest;
    *snd_largest = x;
    }
    for (int i = 0; i < n; i++)
    {
        if (*(nums + i) > *largest)
        /* if larger number is found variable largest is updated and
        second largest gets the value of largest*/
        {
            *snd_largest = *largest;
            *largest = *(nums + i);
        }
        else if ((*(nums + i) >= *snd_largest) && (*(nums + i) < *largest))
        /* in case the number is larger than second largest but not than
        largest, only second largest is updated*/
        {
            *snd_largest = *(nums + i);
        } 
    }

    printf("\nThe largest number on your array is: %d", *largest);
    printf("\nThe second largest number on your array is: %d", *snd_largest);

}

int main()
{
    int *array, n;
    printf("How many elements do you want in the array? ");
    scanf("%d", &n);
    array = (int*) malloc(sizeof(int) * n); // Dynamically allocating memory
    
    if (array == NULL)
    /* in case the memory allocation fails, program terminates
    with an error message*/
    {
        printf("\nSorry, memory was not allocated!");
        exit(1);
    }

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter an integer: ");
        scanf("%d", &array[i]);
    }

    large_nums(array, n); 
    // calling the function where calculation is performed
    free(array); // freeing the allocated memory
    return 0;
}