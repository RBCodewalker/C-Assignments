/*
CH-230-A
a1_p3.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main() {
    
    float result;
    int a = 5;
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
    
    return 0;
}

/*
1. The first change I made is added '#' on the include directive
   which was preventing the compilation of the program.
2. Second, 13.5 is of float type which was defined as integer in the
   initial program so I defined b as a float.
3. Finally, result is of type float so the correct specifier for it 
   would be '%f' not '%d' which is used for integer. ZThat is why I
   changed the specifier in printf function which was causing an error.
*/   