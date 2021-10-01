/*
CH-230-A
a2_p4.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float a, b, h;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);
    float ax, ay, az, at;
    ax = a * a;                   //calculation of area of square
    ay = a * b;                   //calculation of area of rectangle
    az = (a * h) / 2;             //calculation of area of triangle   
    at = ((a + b) / 2) * h;       //calculation of area of trapezoid
    printf("square area=%f\n", ax);
    printf("rectangle area=%f\n", ay);
    printf("triangle area=%f\n", az);
    printf("trapezoid area=%f\n", at);

    return 0;
}