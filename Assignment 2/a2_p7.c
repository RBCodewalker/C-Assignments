/*
CH-230-A
a2_p7.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int i = 8;
    while (i >= 4) {                 //the program was missing braces inside while loop due to which the program went through infinite loop
        printf("i is %d\n", i);
        i--;     
    }
    printf("That’s it.\n"); 
    return 0;
}