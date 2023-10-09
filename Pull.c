#include<stdio.h>
int add(int ,int );
int main()
{
    int x,y,z;
    printf("Enter two number");
    scanf("%d%d",&x,&y);
    z = add(x,y);
    printf("sun is %d",z);
    return 0;
}
int add(int a, int b)
{
    int c;
    c = a+b;
    return c;
}
