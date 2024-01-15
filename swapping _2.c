#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter any two value\n");
    sanf("%d%d",&a,&b);
    printf("value before are %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after are %d and %d\n",a,b);
    getch();
}
