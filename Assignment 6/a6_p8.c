/*
CH-230-A
a6_p8.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// calling structure for the linked list
struct list
{
    int info ;
    struct list * next ;
};

// adding value back of the list
struct list *push_front(struct list *my_list, int value)
{
    struct list *newel;
    newel = (struct list*) malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf(" Error allocating memory\n");
        return my_list;
    }
    newel -> info = value;
    newel -> next = my_list;
    
    return newel ;
}

// adding value ahead of the list
struct list *push_back(struct list *my_list, int value)
{
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list*) malloc (sizeof(struct list));
    if (newel == NULL)
    {
        printf (" Error allocating memory \n");
        return my_list;
    }
    newel -> info = value;
    newel -> next = NULL;
    if (my_list == NULL) return newel;
    while (cursor -> next != NULL) cursor = cursor -> next;
    cursor -> next = newel;
    
    return my_list;
}

// function to print the list
void print_list (struct list * my_list)
{
    struct list * p;
    for (p = my_list; p; p = p -> next)
    {
        printf("%d ", p -> info);
    }
    printf("\n");
}

// function to free the list
void dispose_list (struct list *my_list)
{
    struct list * nextelem ;
    while (my_list != NULL)
    {
        nextelem = my_list -> next;
        free(my_list);
        my_list = nextelem;
    }
}

// function to remove the list
struct list * removefirst(struct list *head)
{ 
    struct list *ref;

    /*if(head == NULL)
    {
        return head;
    }
    else
    {*/
        ref = head;
        head = head -> next;

        free(ref);
        return head;
    //}

}

int main()
{
    struct list* head = NULL;

    char x;
    int i, j;
    while (x != 'q')
    {
        scanf(" %c", &x); // use of switch case for the cases
        switch (x)
        {
            case 'a':
                    scanf("%d", &i);
                    head = push_back(head, i);
                    break;
            case 'b':
                    scanf("%d", &j);
                    head = push_front(head, j);
                    break; 
            case 'r':
                    head = removefirst(head);
                    break;
            case 'p':
                    print_list(head);
                    break;
            case 'q':
                    dispose_list(head);
                    break;
        }
    }
    return 0;    
}