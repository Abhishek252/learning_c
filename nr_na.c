#include<stdio.h>
#include<conio.h>
void add();
int main()
{
   int a,b;
   add();
   return 0;
}
void add()
{
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
}
