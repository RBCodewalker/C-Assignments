/*
CH-230-A
a5_p9.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, d;
    scanf("%d", &r);
    scanf("%d", &c);
    scanf("%d", &d);
    // input values for the dimensions of the 3-d array

    int ***t;

    t = (int***) malloc(sizeof(int**) * r);
    // Dynamic memory allocation for rows
    if (t == NULL) exit(1);
    // in case of allocation failure, program terminates
    for (int x = 0; x < r; x++)
    {
        t[x] = (int**) malloc(sizeof(int*) * c);
        // Dynamic memory allocation for columns
        if (t[x] == NULL) exit(1);
        // in case of allocation failure, program terminates
        for (int y = 0; y < c; y++)
        {
            t[x][y] = (int*) malloc(sizeof(int) * d);
        // Dynamic memory allocation for depth
        if (t[x][y] == NULL) exit(1);
        // in case of allocation failure, program terminates
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < d; k++)
            {
                scanf("%d", &t[i][j][k]);
                // entering the values in the array through keyboard
            } 
        }
    }

    // PRINTING THE REQUIRED RESULT
    for (int i = 0; i < d; i++)
    {
            printf("Section %d:\n", (i+1));
            for (int j = 0; j < c; j++)
            {
                for (int k = 0; k < r; k++)
                {
                    printf("%d ", t[j][k][i]);
                }
                printf("\n");
            }
    }

    free(t); // freeing the allocated memory

    return 0;
}