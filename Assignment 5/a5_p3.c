/*
CH-230-A
a5_p3.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_lower(char *str) // function for calculation
{
    int cnt;
    for (int i = 0; i < strlen(str); i++)
    {
        if ((*(str + i) > 96) && (*(str + i) < 123)) cnt += 1;
        /* if the ascii value of the char corresponds to a small alphabet,
        count increases */
    }
    return cnt;
}

int main(int argc, char *argv[])
{
    char *sth;
    while (7)
    {
        sth = (char*) malloc(sizeof(char) * 50); // Dynamically allocating memory
    
        if (sth == NULL)
        /* in case the memory allocation fails, program terminates
        with an error message*/
        {
            printf("Sorry, memory was not allocated!\n");
            exit(1);
        }
        printf("Enter a string: ");
        fgets(sth, sizeof(sth), stdin);
        
        if (*sth == '\n') exit(1);
        // the loop goes on until empty string is entered
        
        sth[strlen(sth) - 1] = '\0';
        printf("There are %d lowercase characters in '%s'.", count_lower(sth), sth);
        // printing the count of the lowercase chars calling the above function
        getchar();
        free(sth);
    }

    return 0;
}