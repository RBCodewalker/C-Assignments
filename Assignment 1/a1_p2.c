/*
CH-230-A
a1_p2.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
int main() {
    int result; /* The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result);
    return 0;
}

/*
The initial program did not assign the value for the
integer in printf function which, in our case, is the result variable.
After assigning the variable, the correct output was displayed.
*/