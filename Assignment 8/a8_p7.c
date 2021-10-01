/*
   CH-230-A
   a8_p7.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *F, *FF, *FFF;
    char O, T;
    F = fopen("text1.txt", "r"); // opening text1.txt to read
    if (F == NULL)
    {
        printf("!!!File opening failed!!!\n");
    }
    // opening merge12.txt to copy text from the other files
    FFF = fopen("merge12.txt", "w");
    
    // copying text from text1.txt to merge12.txt
    while((O = getc(F)) != EOF)
    {
        putc(O, FFF);
    }
    FF = fopen("text2.txt", "r"); // opening text2.txt to read
    if (FF == NULL)
    {
        printf("!!!File opening failed!!!\n");
    }
    // copying text from text2.txt to merge12.txt
    while((T = getc(FF)) != EOF)
    {
        putc(T, FFF);
    }
    
    // closing all the files
    fclose(F);
    fclose(FF);
    fclose(FFF);

    return 0;
}
