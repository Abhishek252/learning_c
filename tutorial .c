#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%10)
    {
        printf("Not Divisible by 10");

    }
    else
    {
        printf("Divisible by 10");
    }
    return 0;
}
