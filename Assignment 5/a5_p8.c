/*
CH-230-A
a5_p8.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    // enter values for the dimensions of the matrices

    int x[n][m], y[m][p], **z;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &x[i][j]); // input values for matrix A
        }
    }
    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < p; l++)
        {
            scanf("%d", &y[k][l]); // input values for matrix B
        }
    }
    
    z = (int**) malloc(sizeof(int*) * n);
    // Dynamic memory allocation for rows
    if (z == NULL) exit(1);
    // in case of allocation failure, program terminates
    for (int r = 0; r < n; r++)
    {
        z[r] = (int*) malloc(sizeof(int) * p);
        // Dynamic memory allocation for columns
        if (z[r] == NULL) exit(1);
        // in case of allocation failure, program terminates
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < p; j++)
      {
          z[i][j] = 0;
          // assigning 0 to every values in the required matrix
      }
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < p; k++)
        {
            for (int j = 0; j < m; j++)
            {
                z[i][k] += x[i][j] * y[j][k];
                // calculation of the matrix multiplication
            } 
        }
    }

    //PRINTING THE REQUIRED RESULT
    printf("Matrix A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < p; l++)
        {
            printf("%d ", y[k][l]);
        }
        printf("\n");
    }
    
    printf("The multiplication result AxB:\n");
    for (int q = 0; q < n; q++)
    {
        for (int e = 0; e < p; e++)
        {
            printf("%d ", z[q][e]);
        }
        printf("\n");
    }

    free(z); // freeing the memory allocated for matrix z

    return 0;
}