#include<stdio.h>
#include<conio.h>
void main()
{
    int x , y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y );
    x = x+y;
    y = x-y;
    x = x-y;
    printf("The swapping x is %d and y is %d", x,y);
    getch();
}
