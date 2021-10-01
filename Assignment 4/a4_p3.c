/*
CH-230-A
a4_p3.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num)
{
    float gmean;
    float x = 1;
    for (int i = 0; i < num; i++)
    {
        x *= arr[i];
    }
    float v = (float)1 / num; 
    gmean = pow(x, v); 
    // calculation of geometric mean of the values in the array

    return gmean;
}

float hfunc(float arr[], int num)
{
    float y = arr[0];
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > y) y = arr[i];
    }

    return y;
}

float lfunc(float arr[], int num)
{
    float z = arr[0];
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < z) z = arr[i];
    }

    return z;
}

float sfunc(float arr[], int num)
{
    float sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i]; // calculation of sum of values in the array
    }

    return sum;
}

int main()
{
    float arr[15];
    int num = 0;
    char c;
    for (int i = 0; i < 15; i++)
    // loop to enter the values in the array
    {
        printf("Enter a float: ");
        scanf("%f", &arr[i]);
        if (arr[i] < 0) break; 
        // ends loop once negative value is entered
        num++;
    }
    printf("Enter the output you want(m, h, l, s): ");
    scanf(" %c", &c);
    // to enter the required result
    switch(c)
    {
        case 'm':
			printf("geometric mean is: %f\n", geometric_mean(arr, num));
			break;
        case 'h':
			printf("largest float is: %f", hfunc(arr, num));
			break;
        case 'l':
			printf("smallest is: %f", lfunc(arr, num));
			break;
        case 's':
			printf("sum is: %f", sfunc(arr, num));
			break;
        default:
			printf("!!!!!!!Sorry, invalid input!!!!!!!!");
			break;
    }

    return 0;
}