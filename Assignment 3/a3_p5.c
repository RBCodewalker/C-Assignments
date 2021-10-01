/*
CH-230-A
a3_p5.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char c;
    int n;
    double Temp[100], sum, Temf[100], avg;   
    // defining required variables and arrays
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("\nEnter an integer: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)                    
    // loop to add n temperatures and perform various calculations
    {
        printf("\nEnter a temperature in Celsius: ");
        scanf("%lf", &Temp[i]);
        sum += Temp[i];
        Temf[i] = ((9 / 5) * Temp[i]) + 32;    
        // converting each temperature to fahrenheit
    }
    
    avg = sum / n;
    switch (c)             
    // Use of switch for different conditions
    {
        case 's':
           printf("\nThe sum of the temperatures is: %lf\n", sum);
           break;
        case 'p':
           printf("The temperatures are:\n");
           for (int j = 0; j < n; j++) printf("%lf\n", Temp[j]);   
           // prints every value within the array Temp
           break;
        case 't':
           printf("\nThe temperatures in fahrenheit are:\n");
           for (int k = 0; k < n; k++) printf("%lf\n", Temf[k]); 
           // prints every value within the array Temf
           break;
        default: 
           printf("\nThe average of the temperatures is: %lf\n", avg);     
    }
    
    return 0;
}