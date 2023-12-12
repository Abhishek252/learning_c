#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    b=factorial(a);
    printf("factorial = %d",b);
    getch();
    return 0;
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n*factorial (n-1));
    }

}
