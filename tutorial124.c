#include<stdio.h>
void divied(int ,int);
int main()
{
    int x,y;
    printf("\nEnter two number");
    scanf("%d%d",&x,&y);
    divied(x,y);
    return 0;
}
void divied(int x, int y)
{
    int divied;
    divied=x/y;
    printf("\n division is %d",divied);
}
