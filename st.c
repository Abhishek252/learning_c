#include<stdio.h>
#include<conio.h>
int main()
{
    int x=3,y=4;
    while(x<y)
    {
        printf("%d",x+y);
        y=y-x;
        x=y-x;
    }
    getch();
}
