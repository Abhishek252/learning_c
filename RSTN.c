#include<stdio.h>
#include<conio.h>
int add();
int main()
{
    int s;
    s= add();
    printf("sum of%d",s);
    return 0;
}
int add()
{
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
