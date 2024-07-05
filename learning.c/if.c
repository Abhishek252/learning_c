#include<stdio.h>
int main()
{
    int x;
    printf("Enter numbers\n");
    scanf("%d", &x);
    if(x%2==0)
    {
        printf("The number is odd");

    }
    else
    {
        printf("The number is even");

    }
    return 0;
}