#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two number swapping\n");
    scanf("%d",&a);
    printf("Before the swapping first number %d\n",a);
    scanf("%d",&b);
    printf("After the swapping second number %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapping a=%d , b=%d \n",a,b);
    getch();


}
