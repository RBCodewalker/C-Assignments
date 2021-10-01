/*
CH-230-A
a5_p5.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

double scpr(int x, double *y, double *z)
// function to find the scalar product of the vectors
{
    double pr;
    for (int i = 0; i < x; i++)
    {
        pr += y[i] * z[i];
    }
    
    return pr;
}

void sm(int r, double *s)
/* function to print the smallest component
and its position in the vector */
{
    float ss = s[0];
    int b = 0;
    for (int g = 0; g < r; g++)
    {
        if (s[g] < ss)
        {
            ss = s[g];
            b = g;
        }
    }

    printf("The smallest = %f\n", ss);
    printf("Position of smallest = %d\n", b);
}

void lr(int k, double *l)
/* function to print the largest component
and its position in the vector */
{
    float ll = l[0];
    int m = 0;
    for (int o = 0; o < k; o++)
    {
        if (l[o] > ll)
        {
            ll = l[o];
            m = o;
        }
    }

    printf("The largest = %f\n", ll);
    printf("Position of largest = %d\n", m);
}

int main(int argc, char *argv[])
{
    double *v, *w;
    int n;

    scanf("%d", &n); // entering no. of components

    v = (double*) malloc(sizeof(double) * n); // Dynamically allocating memory
    w = (double*) malloc(sizeof(double) * n);
    
    if (v == NULL || w == NULL)
    /* in case the memory allocation fails, program terminates
    with an error message*/
    {
        printf("Sorry, memory was not allocated!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
        // entering the values for the vector v
    }

        for (int j = 0; j < n; j++)
    {
        scanf("%lf", &w[j]);
        // entering the values for the vector w
    }

    // printing all the calculated values
    printf("Scalar product=%lf\n", scpr(n, v, w));
    sm(n, v);
    lr(n, v);
    sm(n, w);
    lr(n, w);

    free(v);
    free(w);

    return 0;
}