/*
CH-230-A
linked_list.h
Rajdeep Bastakoti
r.bastakoti@jacobs-university.de
*/

// calling required functions for the linked list
struct list;

struct list *push_front(struct list *my_list, int value);
struct list *push_back(struct list *my_list, int value);
void print_list (struct list * my_list);
void dispose_list (struct list *my_list);
struct list *removefirst(struct list *my_list);