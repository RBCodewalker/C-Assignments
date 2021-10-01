#include"stack.h"

int push(struct stack * Stack, int item)
{
    printf("Pushing ");
    if(Stack->count == 12)
    {
        printf("Stack Overflow\n");
        return -1;
    }
    printf("%d\n", item);
    Stack->array[Stack->count] = item;
    Stack->count++;
    return 0;
}

int pop(struct stack * Stack)
{
    printf("Popping ");
    if(isEmpty(Stack) == 0)
    {
        printf("Stack Underflow\n");
        return -1;
    }

    printf("%d\n", Stack->array[Stack->count -1]);
    Stack->array[Stack->count - 1] = 0;
    Stack->count--;
    return 0;
}

void empty(struct stack * Stack)
{
    printf("Emptying Stack ");
    while(Stack->count != 0)
    {
        printf("%d ", Stack->array[Stack->count -1]);
        Stack->array[Stack->count -1] = 0;
        Stack->count--;
    }
    printf("\n");
}

int isEmpty(struct stack * Stack)
{
    if(Stack->count == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

struct stack * intialise()
{
    struct stack *Stack = (struct stack*)malloc((sizeof(struct stack)));
    Stack->count = 0;
    for (int i = 0; i < 12; i++)
    {
        Stack->array[i] = 0;
    }
    return Stack;
}
