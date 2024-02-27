#include<stdio.h>
#include<conio.h>
void divide();
int main()
{
    divide();
    return 0;
}
void divide()
{
    int a,b,c;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("divide is %d",c);
}

