/*
   CH-230-A
   a7_p4.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void UpCase(char x[100]) // function to change to upper case
{
    for (int i = 0; i < strlen(x); i++)
    {
        printf("%c", toupper(x[i]));   
    }
    printf("\n");
}

void LoCase(char y[100]) // function to change to lower case
{
    for (int j = 0; j < strlen(y); j++)
    {
        printf("%c", tolower(y[j]));    
    }
    printf("\n");
}

void ChCase(char z[100])
// function to change upper case to lower case and vice versa
{
    for (int k = 0; k < strlen(z); k++)
    {
        if ((z[k] < 91) && (z[k] > 64))
        {
            printf("%c", tolower(z[k]));
        }
        else if ((z[k] < 123) && (z[k] > 96))
        {
            printf("%c", toupper(z[k]));
        }
        else
        {
            printf("%c", z[k]);
        }
    }
    printf("\n");
}

int main()
{
    char a[100];
    int m;

    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1] = '\0';

    while (7)
    {
        scanf("%d", &m);
        // defining function pointers 
        void (*funcpr1) (char*);
        void (*funcpr2) (char*);
        void (*funcpr3) (char*);
        
        // pointing the function pointers to the functions
        funcpr1 = UpCase;
        funcpr2 = LoCase;
        funcpr3 = ChCase;
           
        // doing designated tasks as per the input by the user
        while (m == 1)
        {
            (funcpr1)(a);
            break;
        }
        while (m == 2)
        {
            (funcpr2)(a);
            break;
        }
        while (m == 3)
        {
            (funcpr3)(a);
            break;
        }
        while (m == 4)
        {
            exit(1);
        }

    }

    return 0;
}