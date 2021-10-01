#include<stdio.h>
#include<stdlib.h>

#define MAX 12

struct stack
{
    unsigned int count;
    int array[MAX];
};


int push(struct stack * Stack, int item);

int pop(struct stack * Stack);

void empty(struct stack * Stack);

int isEmpty(struct stack * Stack);

struct stack * intialise();