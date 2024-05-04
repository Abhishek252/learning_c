#include<stdio.h>
int main()
{
    int a[3];
    int *ptr ;
    ptr = &a;
    printf("enter the number:");
    scanf("%d", &a[0]);
    printf("enter the number:");
    scanf("%d", &a[1]);
    printf("enter the number:");
    scanf("%d", &a[2]);

    printf("the value is %d\n", a[0]);
    printf("the value is %d\n", a[1]);
    printf("the value is %d\n", a[2]);

    return 0;
}