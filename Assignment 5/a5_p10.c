/*
CH-230-A
a5_p10.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

void cntdn(int x)
{
    if (x == 1)
    {
        printf("%d ", x);
    }
    else
    {
        printf("%d ", x);
        cntdn(x - 1); 
        // use of recursion for countdown
    }
}

int main()
{
    int n;
    scanf("%d", &n); // input values for integer n

    cntdn(n); // calling the cntdn function
    return 0;
}
