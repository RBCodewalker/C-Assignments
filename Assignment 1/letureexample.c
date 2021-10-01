#include <stdio.h>
int main ()
{
    int a = 7;
    int * ptr;
    ptr = &a;
    *ptr += 7;
    printf("The number added to 7 is: %d\n", *ptr);
    printf("The value of the pointer is: %p\n", ptr);
    printf("The size of the pointer is: %d\n", sizeof(ptr));
    return 0;
}