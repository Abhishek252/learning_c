#include<stdio.h>
#include<conio.h>
int subtraction();
int main()
{
    int sub ;
    sub=subtraction();
    printf("subtraction of = %d\n",sub);
    return 0;
}
int subtraction()
{
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    c=a-b;
    return c;
}
