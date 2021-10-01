/*
CH-230-A
a3_p4.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c)
{
    int idx;
    for (idx = 0; str[idx] != c && str[idx] != '\0'; idx++) {} 
    /* braces were absent previously which caused the error because 
    the value of idx would be returned when the first true condition 
    was encountered*/ 
    return idx;
}

int main() 
{
    char line[80]; 
    // removed while loop which was repeating the program infinitely
    printf("Enter string:\n");
    fgets(line, sizeof(line), stdin);
    printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    return 0;   // added return
}
