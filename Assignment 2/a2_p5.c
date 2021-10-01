/*
CH-230-A
a2_p5.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("You entered %d\n", a);
    int *ptr_a;     // declaring pointer
    ptr_a = &a;      // pointer pointing to a
    printf("The address contained in the pointer variable is: %p\n", ptr_a); // printing address of a %p specifier
    *ptr_a += 5; // changing the value of pointer variable
    printf("The modified value of the pointer variable is %d and its address is %p\n", *ptr_a, &ptr_a); // & gives address of a variable

    return 0;
}