/*
   CH-230-A
   stack.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include "stack.h"

int push(struct stack *sk, int data)
// FUNCTION TO PUSH THE INPUT INTO THE STACK
{
    //printf("Pushing ");
    if(sk -> count == 12)
    {
        printf("Stack Overflow\n");
        return -1;
    }
    //printf("%d\n", data);
    
    sk -> array[sk -> count] = data;
    sk -> count++;
    
    return 0;
}

int pop(struct stack *s)
// FUNCTION RESPONSIBLE FOR POPPING THE INPUT OFF THE STACK
{
    printf("Popping ");
    if(isEmpty(s) == 0)
    {
        printf("Stack Underflow\n");
        return -1;
    }

    printf("%d\n", s -> array[(s -> count) -1]);
    s -> array[(s -> count) - 1] = 0;
    s -> count--;
    return 0;
}

void empty(struct stack *sk)
// THIS FUNCTION EMPTIES THE STACK POPPING OUT EVERY ELEMENTS
{
    printf("Emptying Stack ");
    while(sk -> count != 0)
    {
        printf("%d ", sk -> array[(sk -> count) -1]);
        sk -> array[(sk -> count) -1] = 0;
        sk -> count--;
    }
    printf("\n");
}

int isEmpty(struct stack *k)
// TO CHECK IF THE STACK IS EMPTY
{
    if(k -> count == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

struct stack *start()
{
    struct stack *sk = (struct stack*) malloc((sizeof(struct stack)));
    sk -> count = 0;
    for (int i = 0; i < 12; i++)
    {
        sk -> array[i] = 0;
    }
    return sk;
}

// THE FUNCTION FOR BINARY CONVERSION
void binconv(struct stack *kk, unsigned int thenum)
{
    unsigned int convref;
    convref = thenum;

    while (convref > 0)
    {
    // IMPLEMENTING PUSH FUNCTION TO ADD THE BINARY BITS IN THE STACK
        push(kk, convref % 2);
        convref /= 2;
    }
}