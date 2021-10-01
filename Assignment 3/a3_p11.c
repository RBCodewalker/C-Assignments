/*
CH-230-A
a3_p11.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char one[100];
    char two[100];
    char three[100];
    char y;

    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    one[strlen(one) - 1] = '\0';
    // adding \0 at the end of the string to denote the end
    two[strlen(two) - 1] = '\0';
    
    scanf(" %c", &y);
    
    int c = strlen(one);  
    //using strlen function to find length of string
    printf("length1=%d\n", c);
    
    int d = strlen(two);
    printf("length2=%d\n", d);
    
    int x = (strcmp(one, two));
    /* using strcmp to compare the size of the first distinct
    character of the strings*/
    
    strcat(one, two);
    printf("concatenation=%s\n", one);
    // using strcat function to concatenate the strings
    
    printf("copy=%s\n", strcpy(three, two));
    // using strcpy function to copy a string to another
    

    if (x < 0)
    {
        printf("one is smaller than two\n");
    }
    else if (x > 0)
    {
        printf("one is larger than two\n");
    } 
    else
    {
        printf("one is equal to two\n");
    }
    
    char *z;
    z = strchr(two, y);
    /* using strchr function to find a character within the
    given string*/
    if (z == NULL) 
    {
        printf("The character is not in the string\n");
    }
    else
    {
        printf("position=%ld\n", z-two);
    }   

    return 0;
}