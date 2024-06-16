#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x = 5;
    int *ptr;

    ptr = (int *) calloc(5, sizeof(int));
    for(int i=0; i<=4; i++)
    {
        printf("%d\n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<=4; i++)
    {
        printf("the value of array :%d\n", i,*ptr);
    }


    ptr = realloc(ptr, 5);
    for(int i=0; i<=4; i++)
    {
        printf("%d\n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<=4; i++)
    {
        printf("the value of this new array: %d\n", i, *ptr);
    }
    free(ptr);

    return 0;
}
