/*
   CH-230-A
   a7_p6.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct person
{
    char n[30];
    int a;
};

void bsrt(struct person *s, size_t n,
int comp(const struct person *y, const struct person *z))
// function for bubble sorting
{
    bool yui;
    for (int i = 0; i < n; i++)
    {
        yui = false;
        for (int j = 0; j < (n - (i + 1)); j++)
        {
            if (comp(&s[j + 1], &s[j]) < 0)
            {
                struct person ref = s[j + 1];
                s[j + 1] = s[j];
                s[j] = ref;

                yui = true;
            }
        }

        if (yui == false)
        {
            break;
        }
    }
    
}

int cmy(const struct person *y, const struct person *z)
// function to compare name
{
    int cmpj = strcmp(y -> n, z -> n);
    int cmpu = (z -> a < y -> a) - (y -> a < z -> a);

    if (cmpj != 0)
    {
        return cmpj;
    }
    else
    {
        return cmpu;
    }
}

int cmz(const struct person *y, const struct person *z)
// function to compare age
{
    int cmpj = strcmp(y -> n, z->n);
    int cmpu = (z -> a < y -> a) - (y -> a < z -> a);

    if (cmpu != 0)
    {
        return cmpu;
    }
    else
    {
        return cmpj;
    }
}

int fp(struct person *s, int ln)
// function to print the required output
{
    for (int i = 0; i < ln; i++)
    {
        printf("{%s, %d}; ", s[i].n, s[i].a);
    }
    printf("\n");

    return 0;
}

int main()
{
    int x;
    scanf("%d", &x);

    struct person ar[x];

    for(int k = 0; k < x; k++)
    {
        getchar();
        
        fgets(ar[k].n, sizeof(ar), stdin);
        
        for(int j = 0; j < sizeof(ar); j++)
        // removing the new line from the end of string
        {
            if (ar[k].n[j] == '\n')
            {
                ar[k].n[j] = '\0';
            }
        }
        
        scanf("%d", &ar[k].a);
    }

    bsrt(ar, x, cmy); // sorting for name
    fp(ar, x);

    bsrt(ar, x, cmz); // sorting for age
    fp(ar, x);

    return 0;
}