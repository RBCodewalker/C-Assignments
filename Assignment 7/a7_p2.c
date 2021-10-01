/*
   CH-230-A
   a7_p2.c
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct starl
{
	struct starl *pre;
	struct starl *pro;
	char x;
};

typedef struct starl lll;
lll *head = NULL;      
// creating empty list by assigning null to the beginning and end of the list
lll *tail = NULL;

void addelem(char y)
// function to add element to the doubly linked list
{
	lll *tryit;
	tryit = (lll *)malloc(sizeof(lll));  // dynamic memory allocation

	if (tryit == NULL)// function ends in case memory allocation fails
	{
        printf("Sorry, memory allocation failed!\n");
		return;
	}

	tryit -> x = y;
	if(head != NULL)
    {
		head -> pre = tryit;
	}
	tryit -> pre = NULL;
	tryit -> pro = head;
	head = tryit;  // head is now the new element
}
void delrr(char z)
// functtion to remove element from the doubly linked list
{
	int ref;
	lll *tryit, *proelem;
	tryit = head;

	while (tryit != NULL)
    {
		proelem = tryit;
		if (tryit -> x == z)
        {
			if ((tryit -> pro) != NULL)
            {
				(tryit -> pro) -> pre = tryit -> pre;
			}
			if((tryit -> pre) != NULL)
            {
				(tryit -> pre) -> pro = tryit -> pro;
			}
			proelem = tryit -> pro;
			free(tryit); // deallocating the occupied memory
			ref = 1;
		}
		tryit = proelem -> pro;
	}
	if(ref == 0){
		printf("The element is not in the list!\n");
	}
}	

void prfront() // function to print from the front
{
	lll *tryit;
	tryit = head;
	while (tryit != NULL)
    // in order to print until the last element is encountered
    {
		printf("%c ",tryit -> x);
		tryit = tryit -> pro;
	}
	printf("\n");
}

void prback() // function to print from the back
{
	lll *tryit;
	tryit = head;
	while (tryit -> pro != NULL)
    {
		tryit = tryit -> pro;
	}
	while (tryit != NULL)
    {
		printf("%x",tryit -> x);
		tryit = tryit -> pre;
	}
	printf("\n");
}
void memfr() // function to free the memory
{
	lll* tryit;
	while (head != NULL)
    {
		tryit = head -> pro;
		free(head);
		head = tryit;
	}
}

int main()
{
	int s;
	char t;
	while(7)
    {
		scanf("%d", &s);
		switch(s) /// use of switch..case to perform designated tasks 
        {
			case 1:
				getchar(); // to prevent unwanted memory consumption
				scanf("%c", &t);
				addelem(t); // adding element
				break;
			case 2:
				getchar();
				scanf("%c", &t);
				delrr(t); // deleting element
				break;
			case 3:
				prfront(); // printing from the front
				break;
			case 4:
				prback(); // printing from the back
				break;
			case 5:
				memfr(); // freeing the memory
				exit(1); // terminating the program 
				break;
		}
	}	
	return 0;
}    