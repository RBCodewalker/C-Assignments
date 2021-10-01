/*
CH-230-A
a5_p7.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char x[100], y[100], *z, *b;
    fgets(x, sizeof(x), stdin); // enter first string
    x[strlen(x) - 1] = '\0';
    fgets(y, sizeof(y), stdin); // enter second string
    y[strlen(y) - 1] = '\0';
    
    b = strcat(x, y); // concatenating the strings
    int a = strlen(b);

    z = (char*) malloc(sizeof(char) * a);
    // Dynamically allocating memory
    if (z == NULL)
    /* in case the memory allocation fails, program terminates
    with an error message*/
    {
        printf("Sorry, memory was not allocated!\n");
        exit(1);
    }
    
    z = strcpy(z, b);
    printf("Result of concatenation: %s\n", z); // printing the concatenated result

    free(z); // freeing the allocated memory
    
    return 0;
}