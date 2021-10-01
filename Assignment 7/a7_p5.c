/*
   CH-230-A
   a7_p5.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int ascn(const void *var1 , const void *var2)
// function to sort the values in ascending order
{
    const int *s = ( const int *)var1;
    const int *t = ( const int *)var2;
    if (*s < *t )
    {
        return -1;
    }
    else if (*s > *t)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
 }


void sr (int ar[], int ln, int (*fnc)(const void *var1, const void *var2))
// function to print the sorted the values
{
    qsort(ar, ln, sizeof(int), fnc);
    for(int j = 0; j < ln; j++)
    {
        printf("%d ", ar[j]);
    }
    printf("\n");
}

int revcmp ( const void *var1 , const void *var2)
// function to sort the values in descending order
{
    const int *a = ( const int *) var1;
    const int *b = ( const int *) var2;
    if (* a < *b )
    {
        return 1;
    }
    else if (* a > * b) 
    {
        return -1;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    int x, *ar;
    char ch;
    
    scanf("%d", &x);
    
    ar = (int*) malloc(sizeof(int) * x); // dynamically allocating memory
    if (ar == NULL)
    // in case memory allocation fails
    {
        printf("Sorry, memory allocation failed!!!");
        exit(1);
    }

    for (int k = 0; k < x; k++)
    {
        scanf("%d", &ar[k]);
    }
    while(7) // endless loop until exit command is passed
    {
        getchar();
        scanf("%c", &ch);

        if (ch == 'a')
        {
            sr(ar, x, ascn);
        }
        else if (ch == 'd')
        {
            sr(ar, x, revcmp);
        }
        else if (ch == 'e')
        {
            break;
        }
        else
        {
            break;
        }
    }
    
    free(ar);
    return 0;
}