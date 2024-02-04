#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two value for perform swapping\n");
    scanf("%d%d",&a,&b);
    printf("value before swapping are %d and %d\n", a,b);
    a=b+a;
    b=a-b;
    a=a-b;
    printf("value after swapping are %d and %d\n",a,b);
    getch();
}
