/*
   CH-230-A
   stack.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

struct stack
// DEFINING STACK
{
    unsigned int count;
    int array[12];
};

// DECLARING ALL THE REQUIRED FUNCTIONS

int push(struct stack *sk, int data);

int pop(struct stack *sk);

void empty(struct stack *data);

int isEmpty(struct stack *sk);

struct stack *start();