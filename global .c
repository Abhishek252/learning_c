#include<stdio.h>
#include<conio.h>
int a,b,result;
int main()
{
    sub();
    multi();
    divide();
    getch();
}
sub()
{
    printf("\n Enter any two integer value");
    scanf("%d%d",&a,&b);
    result=a-b;
    printf("\n Addition of two value  %d",result);

}
multi()
{
    printf("\n Enter  any two integer value ");
    scanf("%d%d",&a,&b);
    result=a*b;
    printf(" multiplication of two value %d\n",result);

}
divide()
{
    printf("Enter any two integer value");
    scanf("%d%d",&a,&b);
    result = a/b;
    printf(" divide by two value %d\nN",result);
}
