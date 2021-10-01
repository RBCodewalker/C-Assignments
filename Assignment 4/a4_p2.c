/*
CH-230-A
a4_p1.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char hw[50];
    fgets(hw, sizeof(hw), stdin);
    hw[strlen(hw) - 1] = '\0';

    for (int i = 0; i < strlen(hw); i++)
    {
        if (i % 2 == 0)  // elements in even places print as normal 
        {
            printf("%c\n", hw[i]);
        }
        else
        {
            printf(" %c\n", hw[i]);
            /* spaces help us create the zig zag sequence for
            elements in odd places*/
        }
    }

    return 0;
}