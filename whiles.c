#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,n;
    printf("Enter any two number");
    scanf("%d%d",&x,&y);
    printf("%d%d\n",x,y);
    n=x;
    x=y;
    y=n;
    printf("%d%d\n",x,y);
    getch();

}

