/*
CH-230-A
a3_p9.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n)
{
    double s = 0.00;
    if (n < 6)  
/* this is the case when there is not any value for the
sixth position*/ 
    {
        printf("One or both positions are invalid\n"); 
        s = -111;
    }
    else
    {
        s = v[2] + v[5]; 
    /* calculation of sum of the values in 3rd and 6th
    position of the array*/
        printf("sum=%lf\n", s); 
    }   
    return s;
}

int main()
{
    int n;
    scanf("%d", &n);
    double v[20];
    for (int i = 0; i < n; i++) // loop reading n double values
    {
        scanf("%lf", &v[i]);
    }
    sum25(v, n);

    return 0;
}