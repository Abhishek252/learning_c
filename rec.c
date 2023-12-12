#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int n,answer;
    printf("Enter a number\n");
    scanf("%d",&n);
    answer = factorial( n);
    printf("Factorial =%d",answer);
    getch();
    return 0;



}
int factorial(int n)
{
    int f;
    if(n==0)
        return 1;
    else
    {
        f=n*factorial(n-1);
        return f;
    }
}

