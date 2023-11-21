#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10, b=20;
    a= a+b;
    b= a-b;
    a= a-b;
    printf("%d\n",a,b);
    getch();
}
