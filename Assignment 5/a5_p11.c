/*
CH-230-A
a5_p11.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int prime(int x, int y)
{
    if(y == 1)// 2 is prime
    {
        return 1;
    }
    else if(x == 1 || x == 0)
    // 0 and 1 are not prime
    {
        return 0;
    }
    else if((x % y) == 0)
    {
        return 0;
    }
    
    else
    {
        return prime(x, y - 1);
// use of recursion for determining whether x is prime or not
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    int y = prime(x, x / 2);
    if(y == 0)
    {
        printf("%d is not prime\n", x);
// printing corresponding messages for the result
    }
    else
    {
        printf("%d is prime\n", x);
    }
    
    return 0;
}