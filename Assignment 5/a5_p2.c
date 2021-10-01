/*
CH-230-A
a5_p2.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

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
    float a[6];
    int s = 6;

    a[0] = 5.5;
    a[1] = 6.5;
    a[2] = 7.75;
    a[3] = 8;
    a[4] = 9.6;
    a[5] = 10.36;
// providing values to the array defined above
    printf("Before:\n");
    int j = 0;
    while(j < s)
    {
        printf("%.3f ", a[j]);
        j++;
    }    
    printf("\nAfter:\n");
    divby5(a, s);
// printing the required output
    return 0;
}