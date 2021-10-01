/*
CH-230-A
a2_p3.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int w, d, h;
    printf("Enter the no. of weeks: ");
    scanf("%d", &w);
    printf("Enter the no. of days: ");
    scanf("%d", &d);
    printf("Enter the no. of hours: ");
    scanf("%d", &h);
    int x = (w * 7 * 24) + (d * 24) + h; //formula for the conversion of entered weeks, days and hours into hours
    printf("The total is %d hours.", x);

    return 0;  
}