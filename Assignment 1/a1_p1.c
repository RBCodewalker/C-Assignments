/*
CH-230-A
a1_p1.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
int main() {
    double result; /* The result of our calculation */
    result = (3.0 + 1.0) / 5.0;
    printf("The value of 4/5 is %lf\n", result);
return 0;
}

/* With the initial program, we get 0.000 as a result because the
result variable is defined as a double, so it can carry only double
value but the calculation in the initial program would treat it as an 
integer and it did not have a double value to show. Here, I changed
the integers assigned to the result variable into double values to get
the correct result.
*/