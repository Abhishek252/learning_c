#include<stdio.h>
#include<conio.h>
int add(void);
int main()
{
    int sum;
    sum=add();
    printf("sum is %d \n",sum);
    return 0;
}
int add(void)
{
    int a,b,c;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
