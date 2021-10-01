/*
CH-230-A
use_linked_list.c
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef linked_list_h
int main()
{
    struct list* my_list; // defining a list to manipulate

    char x;
    int i, j;
    while (x != 'q')
    {
        scanf(" %c", &x); // use of switch case for the cases
        switch (x)
        {
            case 'a':
                    scanf("%d", &i);
                    push_back(my_list, i);
                    break;
            case 'b':
                    scanf("%d", &j);
                    my_list = push_front(my_list, j);
                    break; 
            case 'r':
                    my_list = removefirst(my_list);
                    break;
            case 'p':
                    print_list(my_list);
                    break;
            case 'q':
                    dispose_list(my_list);
                    break;
        }
    }
    return 0;    
}
#endif