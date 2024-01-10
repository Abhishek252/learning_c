#include<stdio.h>
#include<conio.h>
int a,b,result;
int main()
{
    sum();
    sub();
    getch();

}
sum()
{
    printf("Enter two number to find their sum\n");
    scanf("%d%d",&a, &b);
    result=a+b;
    printf("Sum of two numbers is %d\n",result);
}
sub()
{
    printf("Enter two number to find their differenc\n");
    scanf("%d%d",&a,&b);
    result=a-b;
    printf("\n difference of two numbers is %d",result);
    return 0;
}
