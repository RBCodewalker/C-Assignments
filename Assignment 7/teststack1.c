#include<stdio.h>

#include"stack1.h"

int main()
{
    struct stack * Stack = intialise();

    int item;
    char ch;

    while((((ch = getchar()) != EOF) && (ch != 'q')))
    {
        switch(ch)
        {
            case 's':
                scanf("%d", &item);
                push(Stack, item);
                break;
            case 'p':
                pop(Stack);
                break;
            case 'e':
                empty(Stack);
                break;
            default:
                continue;
        }
    }
    printf("Quit\n");
    return 0;
}