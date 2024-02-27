#include<stdio.h>
#include<conio.h>
void subtract();
int main()
{
    subtract();
    return 0;
}
void subtract()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("Subtraction is %d\n",c);
}
