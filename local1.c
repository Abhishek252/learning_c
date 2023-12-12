#include<stdio.h>
#include<conio.h>
int a,b,result;
int main()
{
    sum();
    multi();
    divide();
    getch();

}
sum()
{
    int a,b,sum;
    printf("Enter ant two integer value\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\n Addition of two value%d",sum);

}
