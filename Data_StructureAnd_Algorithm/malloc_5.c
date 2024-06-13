#include<stdlib.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));
    printf("Enter number (5)");

    for(int i=0; i<5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 10);
    printf("Enter number (10)");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &ptr[i]);

    }

    for(int i=0; i<5; i++)
    {
        printf("%d\n", i, ptr[i]);

    }

    return 0;

}
