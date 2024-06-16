#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=5;
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    printf("%d\n", a);
    return 0;
}