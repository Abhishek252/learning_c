#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("Enter (5)number");
    scanf("%d", &n);
     
    ptr= (int *) calloc (n, sizeof(int));
    

    for(int i=0; i<n; i++)
    {
        printf("%d\n", i);
        scanf("%d", &ptr[i]);

    }

    for(int i=0; i<n; i++)
    {
        printf("the value of array: %d\n", i,ptr[i]);
    }

    return 0;
}