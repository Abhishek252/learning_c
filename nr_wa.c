#include<stdio.h>
#include<stdio.h>
void add(int ,int);
int main()
{

    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum  is %d",sum);

}

