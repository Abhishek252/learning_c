#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int main()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Addition is %d\n",c);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
