#include<stdio.h>
int add(void);
int main()
{
    int sum;
    sum =add();
    printf("\nAddition=%d",sum);
    return 0;
}
int add(void)
{
    int a,b,c;
    printf("\nEnter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
