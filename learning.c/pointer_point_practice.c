#include<stdio.h>
int main()
{
    int i=5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", **pptr);
    printf("%d\n", i);
    
    return 0;
}