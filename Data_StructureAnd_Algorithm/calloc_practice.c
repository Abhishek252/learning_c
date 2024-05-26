#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the size of  array you want to\n");
    scanf("%d", &n);

    ptr= (int*)calloc(5,sizeof(int));

    for(int i=0; i<5; i++)
    {
        printf("the value of no this size of array%d\n", i,ptr);
        

    }
    for(int i= 1; i<5; i++)
    {
        printf("the value of no this size of array %d\n",  ptr[i]);
    }
    return 0;

    
}