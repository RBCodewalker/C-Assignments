/*
CH-230-A
a4_p12.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceAll(char *str, char c, char e)
// function to replace all the occurences of the character c with e
{   
    for (int j = 0; j < strlen(str); j++)
    {
        if (str[j] == c) str[j] = e;
    }

    printf("\nThe modified string is: %s\n", str);
}

int main(int args, char *argv[])
{
    char *str, c, e, *x;
    while (7)
    {
        str = (char*) malloc(sizeof(char) * 80); // Dynamically allocating memory
    
        if (str == NULL)
        /* in case the memory allocation fails, program terminates
        with an error message*/
        {
            printf("Sorry, memory was not allocated!\n");
            exit(1);
        }
        printf("Enter a string: ");
        fgets (str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';

        x = "stop";  
        if (strcmp(str, x) == 0)
        // if stop is entered, the program terminates
        {
            exit(1);
        }
        else
        {
            printf("\nWhat character do you want to replace from the string? ");
        // asking the character to search for in the string
        scanf(" %c", &c);
        printf("\nWhat character do you want in place of the previous one? ");
        scanf(" %c", &e);
        printf("You are about to replace every '%c' in '%s' with '%c'\n", c, str, e);
        replaceAll(str, c, e);
        printf("You replaced every '%c' in '%s' with '%c'\n", c, str, e);
        str[0] = '\0';
        getchar();
        free(str); // freeing the allocated memory
        }
        
        
    }
        
   
    free(str);
    return 0;
}