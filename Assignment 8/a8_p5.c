/*
   CH-230-A
   a8_p5.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <stdio.h>

int main()
{
    char one, two;
    
    FILE *PP;
    
    PP = fopen("chars.txt", "r"); // TO OPEN THE FILE FOR READING
    if (PP == NULL)
    {
        printf("!!!File opening failed!!!\n");
    }

    // TO READ THE CHARS
    one = getc(PP);
    two = getc(PP);
    
    fclose(PP); // CLOSING THE FILE
    
    FILE *ADD = NULL;
    
    ADD = fopen("codesum.txt", "w"); // TO OPEN THE FILE FOR WRITING
    if (ADD == NULL)
    {
        printf("!!!File opening failed!!!\n");
    }
    
    fprintf(ADD, "The sum of first two chars in the file is: %d", (one + two));
    
    fclose(PP); // CLOSING THE FILE
    
    return 0;
}
