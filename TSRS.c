#include<stdio.h>
#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum of %d",c);
    return 0;
}

int add(int x,int y)
{
    int z;
    z=x+y;
    return z;

}
