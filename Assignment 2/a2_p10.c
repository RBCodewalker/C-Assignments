/*
CH-230-A
a2_p10.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n <= 0) {         // we don't want the integer to be negative or zero
        scanf("%d", &n);
    }
    int i = 1;
    while (i <= n){      // we only want the table till the entered days n
        if (i == 1)          
        {
            printf("%d day = %d hours\n", i, (i * 24)); // we need to print day for a day and days for the rest
        }
        else 
        {
            printf("%d days = %d hours\n", i, (i * 24)); // calculation of the hours as 1 day equals 24 hours
        }
        i++;  // i increases with every loop and stops after the condition is met
    }

    return 0;
}