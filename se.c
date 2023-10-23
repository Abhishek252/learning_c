#include<stdio.h>
void add(void);
int main()
{
    add();
    return 0;
}
void add(void)
{
    int a,b, sum;
    printf("\nEnter two number");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\nAddition is %d",sum);

}
