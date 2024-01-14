#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter any numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping value of a=%d and value of b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping value of a=%d and value of b=%d",a,b);
    getch();
}
