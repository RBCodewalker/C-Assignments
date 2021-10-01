/*
   CH-230-A
   teststack.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include "stack.h"

int main()
{
    struct stack * stk = start();

    int dat;
    char charc;

    while((((charc = getchar()) != EOF) && (charc != 'q')))
    // until the end of the stack is reached, loop goes on!
    {
        switch(charc)
        // performing tasks according to the choice of user
        {
            case 's':
                {
                    scanf("%d", &dat);
                    push(stk, dat);
                    break;
                }
            case 'p':
                {
                    pop(stk);
                    break;
                }
            case 'e':
                {
                    empty(stk);
                    break;
                }
            default:
                {
                    continue;
                }
        }
    }
    
    printf("Quit\n");
    
    return 0;
}