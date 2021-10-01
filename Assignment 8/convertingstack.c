/*
   CH-230-A
   convertingstack.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include "stack.h"

int main()
{
    struct stack *mystack = start();
    unsigned int n, ref;
    scanf("%ud", &n);

    binconv(mystack, n); // calling conversion function
    
    printf("The binary representation of %d is ", n);
    // PRINTING THE BINARY REPRESENTATION STORED IN THE STACK ARRAY
    for (ref = mystack -> count - 1; ref < mystack -> count; ref--)
    {
        printf("%d", mystack -> array[ref]);
    }

    printf(".\n");
    
    return 0;
}