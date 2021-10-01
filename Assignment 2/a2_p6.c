/*
CH-230-A
a2_p6.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double x, y;
    printf("First double: ");
    scanf("%lf", &x);
    printf("Second double: ");
    scanf("%lf", &y);
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    printf("The address in ptr_one is: %p\n", ptr_one); // gives address of x
    printf("The address in ptr_two is: %p\n", ptr_two);  // also gives address of x thus equivalent to previous one 
    printf("The address in ptr_three is: %p\n", ptr_three); // gives address of y so it is different from previous ones

    return 0;
}