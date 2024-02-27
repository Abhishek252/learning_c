#include<stdio.h>
#include<conio.h>
int a,b,result;
void main()
{
    sum();
    sub();
    getch();
}
sum()
{
    printf("Enter two value to find their sum\n");
    scanf("%d%d",&a,&b);
    result=a+b;
    printf("The sum of=%d\n",result);
    getch();
}
sub()
{
    printf("Enter two value to find their difference\n");
    scanf("%d%d",&a,&b);
    result=a-b;
    printf("The difference  between two value=%d ",result);
    getch();
}
