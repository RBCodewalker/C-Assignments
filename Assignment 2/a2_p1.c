/*
CH-230-A
a2_p1.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double x , y;
    int a , b;
    char r , s;
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &r);
    scanf(" %c", &s);
    double c = x + y;
    double d = x - y;
    double e = x * x;
    int f = a + b;
    int g = a * b;
    char h = r + s;
    char i = r * s;
    printf("sum of doubles=%lf\n", c);
    printf("difference of doubles=%lf\n", d);
    printf("square=%lf\n", e);
    printf("sum of integers=%d\n", f);
    printf("product of integers=%d\n", g);
    printf("sum of chars=%d\n", (r + s));
    printf("product of chars=%d\n", (r * s));
    printf("sum of chars=%c\n", h);
    printf("product of chars=%c\n", i);

    return 0;
}