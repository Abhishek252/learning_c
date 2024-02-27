#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    printf("Enter any two number");
    scanf("%d%d",&x,&y);
    printf("%d%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d%d\n",x,y);
    getch();
}
