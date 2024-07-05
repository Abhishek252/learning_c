#include<stdio.h>
int main()
{
    int a;
    printf("Enter two numbers");
    scanf("%d", &a);
    printf("%d\n", ~a);
    return 0;
}