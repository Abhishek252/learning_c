#include<stdio.h>
int main()
{
    int a[4];
    int i;
    printf("Enter element of array\n");
    for(i=0; i<=3; i++)
    {
        printf("element %d\n", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<=3; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;

}