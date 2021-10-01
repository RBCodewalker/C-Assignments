#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define LENGTH 100

int main()
{
    //c is the number of chunks that the file reads//
    int n, c;
    scanf("%d", &n);

    //Stores the names of the text file//
    char list_files[n][LENGTH];

    //The buffer which is 64 bytes//
    char buffer[64];

    //For the reading of files//
    FILE * fptr;

    //pointer to output.txt, that writes//
    FILE * out_ptr;

    /*Need this so that fgets, doesn't considered \n from previous
    Input as an input*/
    getchar();

    //Reads values for the files that the user inputs//
    for (int i = 0; i < n; i++)
    {
        fgets(list_files[i], LENGTH, stdin);
        list_files[i][strcspn(list_files[i], "\n")] = 0;
    }

    //Opens output.txt to write into//
    out_ptr = fopen("output.txt", "wb");


    //Makes sure that the writing starts from the start//
    fseek(out_ptr, 0, SEEK_SET);


    printf("Concating the content of %d files ...\n", n);
    printf("The result is:\n");

    for (int i = 0; i < n; i++)
    {
        //Opens the i+1th file to read//
        fptr = fopen(list_files[i], "rb");

        while(!feof(fptr))
        {
            //This is used to add newline to text and output//
            if(i != 0)
            {
                strcpy(buffer, "\n");
                fwrite(buffer, sizeof(char), 1, out_ptr);
                fwrite(buffer, sizeof(char), 1, stdout);
            }
                
            //reads each line, when successful c = 1, else c = 0//
            c = fread(buffer, 1, 64, fptr);
            
            //Writes to the output file and terminal//
            fwrite(buffer, c, 1, out_ptr);

            fwrite(buffer, c, 1, stdout);
        }

        //Closes the i+1th file//
        fclose(fptr);
        
    }
    //Closes output file//
    fclose(out_ptr);

    //Needed to enter while loop//
    printf("\nThe result was written into output.txt\n");
    return 0;
}