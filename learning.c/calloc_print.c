#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*)calloc(3, sizeof(int));

    for(int i=0; i<10; i++)
    {
        printf("the value of no %d the array of this \n", i);
        scanf("%d", &ptr[i]);

    }
    free(ptr);
    return 0;

}