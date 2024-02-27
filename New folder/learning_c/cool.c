#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
