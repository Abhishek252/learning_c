#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Given a even number");
    }
    else
    {
        printf("Given a Odd number");
    }
    getch();
}
