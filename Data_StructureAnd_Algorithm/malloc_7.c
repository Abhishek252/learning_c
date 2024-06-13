#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter number n");
    scanf("%d", &n);

    ptr= (int*)calloc(n, sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 8);
      printf("enter number n");
      scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("%d\n", i,  ptr[i]);
    }
    return 0;

}