#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter Data in Array");
    for(int i=0; i<=9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Showing the array");
    for(int i=0; i<=9; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;

}