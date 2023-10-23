#include<stdio.h>
int add();
int main()
{
    int sum ;
    sum = add;
    printf("\n Addition =%d",sum);
    return 0;

}
int add()
{
    int a,b,c;
    printf("\nEnter two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
