/*
   CH-230-A
   a8_p9.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, x;
    FILE *F, *OF;
    scanf("%d", &n); // INPUT NUMBER OF REQUIRED FILES
    
    // DEFINING BUFFER AND FILE NAMES ARRAY
    char fname[n][100], buffr[64];

    // INPUT THE FILE NAMES FOR N TIMES
    for (int i = 0; i < n; i++)
    {
        fgets(fname[i], sizeof(fname[i]), stdin);
        fname[i][strlen(fname[i]) -1] = '\0';
    }

    OF = fopen("output.txt", "wb"); // USING BINARY MODE TO WRITE IN THE FILE
    if (OF == NULL) // IN CASE FILE OPENING FAILS
    {
    printf("!!!File opening failed!!!\n");
    }
    //THE PURPOSE OF THIS LINE IS TO START WRITING FROM THE BEGINNING
    fseek(OF, 0, SEEK_SET);

    // REQUIRED TESTCASE PRINTING
    printf("Concating the content of %d files ...\n", n);
    printf("The result is:\n");
    
    for (int j = 0; j < n; j++)
    // TO CONCATENATE THE CONTENT OF EACH FILE INTO THE OUTPUT FILE
    {
        F = fopen(fname[j], "rb");
        // USING BINARY MODE TO OPEN THE INPUT FILES FOR READING
        while (feof(F) != 0)
        {
            if (j > 0)
            {
                strcpy(buffr, "\n");
                fwrite(buffr, sizeof(char), 1, OF);
                fwrite(buffr, sizeof(char), 1, stdout);
            }
                
            x = fread(buffr, 1, 64, F);
            fwrite(buffr, x, 1, OF);
            fwrite(buffr, x, 1, stdout);
        }
        fclose(F); // CLOSING INPUT FILE
    }
    fclose(OF); // CLOSING OUTPUT FILE

    printf("\nThe result was written into output.txt\n");

    return 0;
}