#include<stdio.h>
#include<conio.h>
int subtraction(int ,int);
int main()
{
    int a,b,ans;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    ans=a-b;
    printf("Subtraction is %d ",ans);
    return 0;

}
int subtraction (int x,int y)
{
    int z;
    z=x-y;
    return z;
}
