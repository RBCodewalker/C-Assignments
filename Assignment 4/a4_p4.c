/*
CH-230-A
a4_p4.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]) // function to count the consonants
{
    int x = 0;
    int y;
    for (int i = 0; i < (strlen(str)); i++)
    {
        y = str[i];
        if ((y > 64 && y < 91) || (y > 96 && y < 123))
        // here we count the vowels from all the aplphabets using ascii values
        {
            if (y == 65 || y == 97) x += 1;   
            if (y == 69 || y == 101) x += 1;
            if (y == 73 || y == 105) x += 1;    
            if (y == 79 || y == 111) x += 1;    
            if (y == 85 || y == 117) x += 1;   
        }
        else
        // every characters other than alphabets will increase the count
        {
            x += 1;
        }
        
    }
    int z = strlen(str) - x;
    /* finally we subtract the no. of values other than consonants 
    from the length of our string which gives the no. of consonants*/
    return z;
}

int main()
{
    char cons[100];
    while (7)
    // the loop will continue infinitely until there is an empty string
    {
        fgets(cons, sizeof(cons), stdin);
        if (cons[0] == '\n') break;
        printf("Number of consonants=%d\n", count_consonants(cons));
    }
    
    return 0;
}
