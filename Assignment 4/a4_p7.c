/*
CH-230-A
a4_p7.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h> 

void matrix (int ax[30][30], int x)
// function to print the matrix
{
    int y, z;
    printf("The entered matrix is:\n");
    // nested loop to print the matrix
    for ( y = 0; y < x ; y ++)
    {
        for ( z = 0; z < x ; z ++)
        {
            printf("%d ", ax[y][z]);
        }
        printf("\n");
    }
}

void utmd (int ay[30][30], int y)
// function to print the elements under main diagonal
{
    int k, l;
    printf("Under the main diagonal:\n");
    // nested loop for the print
    for ( k = 0; k < y ; k ++)
    {
        for ( l = 0; l < y ; l ++)
        {
            if (k > l)
            {
                printf("%d ", ay[k][l]);
            } 
        }    
    }
    printf("\n");
}

int main ()
{
    int nums[30][30];
    int i , j, n;
    
    scanf ("%d", &n ) ;
    
    for ( i = 0; i < n ; i ++)
    // nested loop to enter the elements of matrix
    {
        for ( j = 0; j < n ; j ++)
        {
            scanf("%d", &nums[i][j]);
        }    
    }
    matrix (nums, n); 
    // calling functions to print the respective results
    utmd (nums, n);
    return 0;    
}

