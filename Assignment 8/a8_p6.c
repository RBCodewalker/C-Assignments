/*
   CH-230-A
   a8_p6.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *F, *FF, *FFF;
    double oo, tt;
    
    char f1[100], f2[100];
    
    fgets(f1, 100, stdin); // reading file names
    f1[strlen(f1) - 1] = '\0';
    fgets(f2, 100, stdin);
    f2[strlen(f2) - 1] = '\0';

    F = fopen(f1, "r"); // opening first file for reading
    if (F == NULL)
    {
        printf("!!!File opening failed!!!\n");
    }
    
    fscanf(F, "%lf", &oo); // assigning the double from the first file
    printf("Your first double: %lf\n", oo);
    
    FF = fopen(f2, "r"); // opening second file for reading
    if (FF == NULL)
    {
        printf("!!!File opening failed!!!\n");
    }
    
    fscanf(FF, "%lf", &tt); // assigning the double from the second file
    printf("Your second double: %lf\n", tt);
    
    FFF = fopen("results.txt", "w"); // opening file for writing
    if (FFF == NULL)
    {
        printf("!!!File opening failed!!!\n");
    }
    
    // printing the results
    fprintf(FFF, "The sum of your doubles is: %lf\n", (oo + tt));
    fprintf(FFF, "The differennce of your doubles is: %lf\n", (oo - tt));
    fprintf(FFF, "The product of your doubles is: %lf\n", (oo * tt));
    fprintf(FFF, "The division of your doubles is: %lf\n", (oo / tt));
    
    fclose(FFF);
    
    return 0;
}