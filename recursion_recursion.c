#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
    int a,b;
    printf("Enter data\n");
    scanf("%d",&a);
    b=factorial(a);
    printF("factorial=%d",b);
    getch();
}
int factorial(int n)
{
    if(n==1)
    {
        return (1);
    }
    else
    {
        return(n*factorial(n-1));
    }
}
