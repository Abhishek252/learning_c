#include<stdio.h>
#include<conio.h>
int multiplication();
int main()
{
    int a,b,ans;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    ans=a*b;
    printf("multiplication is %d",ans);
    return 0;
}
int multiplication()
{
    int a,b,c;
    c=a*b;
    return c;
}
