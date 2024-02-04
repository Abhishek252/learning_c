#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter two value for perform swapping\n");
    scanf("%d%d",&a,&b);
    printf("Value before swapping are %d and %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Value after swapping are %d and %d\n",a,b);
    getch();
}
