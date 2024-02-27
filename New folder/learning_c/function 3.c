#include<stdio.h>
#include<conio.h>
void add(int a,int b);
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}




void add(int a,int b)
{
    int c;
    c=a+b;
    printf("sum of %d\n",c);
}
