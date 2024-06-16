#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf(" Enter 5 number");
    
    ptr = (int *)malloc(n*sizeof(int));

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {    
        printf("the value of array of this %d\n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++)
    {
        printf("the value of array: %d\n", i,ptr[i]);

    }
    return 0;

}