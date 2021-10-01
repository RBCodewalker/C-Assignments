/*
CH-230-A
a4_p11.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_insensitive(char *str, char c)
// function to count the occurence of the character
{
    int x = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] > 64 && str[i] < 91) str[i] = tolower(str[i]);
        /* if the characters in sting are uppercase, they are turned
        to corresponding lowercase */
    }
    for (int j = 0; j < strlen(str); j++)
    {
        if (c > 64 && c < 91) c = tolower(c);
        /* the character is also turned to lowercase in order to
        match the characters in the string*/
        if (str[j] == c) x += 1;
    }
    return x;
}

int main(int args, char *argv[])
{
    char *str, c;
    str = (char*) malloc(sizeof(char) * 50); // Dynamically allocating memory
    
    if (str == NULL)
    /* in case the memory allocation fails, program terminates
    with an error message*/
    {
        printf("\nSorry, memory was not allocated!");
        exit(1);
    }
    
    printf("Enter a string: ");
    fgets (str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    char strx[strlen(str)];

    strcpy(strx, str);
    free(str);

    printf("Enter a character to search in the string: ");
    // asking the character to search for in the string
    scanf(" %c", &c);
    
    int y = count_insensitive(strx, c); 
    // printing the result to check the correctness of the program
    printf("The character '%c' occurs %d times.\n", c, y);
    
    return 0;
}