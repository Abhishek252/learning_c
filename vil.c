#include<stdio.h>
#include<conio.h>
void subtraction(int,int );
int main()
{
    int a,b,ans;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    ans=a-b;
    printf(" subtraction is %d ",ans);
    return 0;
}
void subtraction(int x,int y)
{
    int z;
    z=x-y;
    printf("%d",z);
}
