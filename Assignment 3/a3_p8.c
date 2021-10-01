/*
CH-230-A
a3_p8.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

float sumf(float q[10])    // function for calculating sum
{
    float s = 0;
    for(int r = 0; r < 10 && q[r] != -99.0; r++) s += q[r];
    // excluded -99.0 from the sum as well
    return s;
}

float avgf(float c[10], int b)
{
    int n = 0;
    for(int x = 0; x < b && c[x] != -99.0; x++) n += 1;
    // number of elements should not include -99.0
    float a = sumf(c) / n;  // called sumf to calculate average
    return a;
}

int main()
{
    int y;
    float f[10];
    printf("How many floats would you like to enter?(1-10) ");
    scanf("%d", &y);
    for(int i = 0; i < y; i++)  // loop to entered required floats
    {
        printf("Enter a float: ");
        scanf("%f", &f[i]);
        if ((f[i]) == -99.0) break;
        //stops the loop is -99.0 is entered
    }
    printf("The sum of your floats is: %f\n", sumf(f));
    printf("The average of your floats is: %f\n", avgf(f, y));

    return 0;
}