/*
   CH-230-A
   queue.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	if(queue_is_full(pq) == 1) // IF QUEUE IS FULL
    {
        return -1;
    }
    else
    {
        Node *newNode = (Node*) malloc(sizeof(Node));
        newNode -> item = item;
        newNode -> next = NULL;

        // IN CASE THE QUEUE IS EMPTY
        if(pq -> front == NULL && pq -> rear == NULL)
		{
			pq -> front = newNode;
			pq -> rear = newNode;
			pq -> items = 1;
			return 0;
        }

        pq -> rear -> next = newNode;
        pq -> rear = newNode;
        pq -> items += 1;
        
        return 0;
    }
}

int dequeue(Item *pitem, Queue *pq)
{
    if(queue_is_empty(pq) == 1) // IN CASE THE QUEUE IS EMPTY
    {
        return -1;
    }
    else
    {
        Node *delNode = (Node*) malloc(sizeof(Node));
        
        *pitem = pq -> front -> item; // RETURNING THE REMOVED ELEMENT
        delNode = pq -> front;
	    pq -> front = (pq -> front -> next);
        
        free(delNode);
	    pq -> items -= 1;
        
        return 0;
    }
}

void printq(Queue *pq)
{
    Node *printref;
    printref = pq -> front;

    for (int i = 0; i < (pq -> items); i++)
    {
        printf("%d ", (printref -> item));
        printref = printref -> next;
    }
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}