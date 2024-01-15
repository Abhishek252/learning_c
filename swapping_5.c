#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter any two number for swapping");
    scanf("%d%d",&a,&b);
    printf(" value before swapping are %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("/n value after swapping are %d and %d",a,b);
    getch();
}
