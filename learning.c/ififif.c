#include<stdio.h>
int main()
{
    int x;
    printf("Enter number");
    scanf("%d", &x);
    if(x%2==0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("non positive");
    }
    return 0;
}