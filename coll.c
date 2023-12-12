#include<stdio.h>
#include<conio.h>
int add(int ,int);
int main()
{
    int a,b,sum;
    printf("Enter number\n");
    scanf("%d%d",&a,&b);
    printf("%d",&a,b);
    sum=add(a,b);
    printf("Addition is %d:",sum);
    return 0;
}
int add(int x,int y)
{
    int z;
    z=x+y;

    return z;
}

