#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;

    printf("Enter the size of no the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("the value of no %d this array %d\n", i,ptr[i]);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++)
    {
        printf("the value of no %d this array %d\n", i, ptr[i]);
    }

    ptr = realloc(ptr, 10);
    printf("Enter the size of array you want to create \n");
    scanf("%d", &n);

    for(int i=0; i<n;i++)
    {
        printf("the value of no this array %d\n", i,ptr[i]);

    }
    return 0;
}