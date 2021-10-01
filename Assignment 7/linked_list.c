/*
CH-230-A
linked_list.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef linked_list_h
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

// function to remove the head of the list
struct list* removefirst(struct list* head)
{
    struct list* ref;

    if(head == NULL)
    {
        return head;
    }
    else
    {
        ref = head;
        head = head -> next;

        free(ref);
        return head;
    }

}

#endif