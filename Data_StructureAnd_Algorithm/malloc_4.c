#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
   

    printf("Enter numbers n:");
    scanf("%d", &n);
     ptr = (int )malloc (n* sizeof(int));

    for(int i =0; i<n; i++)
    {
        printf("%d\n", i, ptr[i]);

    }
    return 0;

}