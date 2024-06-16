#include<stdio.h>
int main()
{
    int *thepointer;

    thepointer = NULL;

    printf("The thepointer pointer is pointing to = %0X\n ", thepointer);
    printf("The thepointer pointer is pointing to = %p\n ", thepointer);
    printf("The thepointer pointer is pointing to = %d\n ", thepointer);

    return 0;
}