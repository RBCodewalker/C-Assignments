/*
CH-230-A
a3_p2.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char ch;
    int n;
    printf("Enter a lowercase character: ");
    scanf(" %c", &ch);
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)          
    // loop to keep printing until every characters till ch-n 
    {
        printf(" %c\n", (ch - i));    
        // i will increases until it becomes equal to n
    }

    return 0;
}