/*
CH-230-A
a3_p7.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c)    /* defining the function
                                       creating the trapezoid*/
{
    for (int i = 1; i <= n; i++)  /* using nested loop for the 
                                   trapezoid*/
    {
       for (int j = 1; j <= m; j++)
       {
           printf("%c", c);
       }
       printf("\n");  /* breaking the line after each row of 
                                 characters*/

       if (m <= (n + m -1)) m++;   /* increasing m because we need to
                        increase the no. of character in each line*/
    }
}

int main()
{
    int n, m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf(" %c", &c);
    print_form(n, m, c);  /* calling the function to to print the 
                         trapezoid for parameters n, m and c*/ 

    return 0;
}