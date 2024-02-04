#include<stdio.h>
#include<conio.h>
int add(int ,int);
int main()
{
    int a,b,sum;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("sum is %d\n",sum);
    return 0;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
