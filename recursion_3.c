#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
    int n,answer;
    printf("Enter data");
    scanf("%d",&n);
    answer=factorial(n);
    printf("factorial= %d",answer);
    getch();
}
int factorial(int n)
{
    int f;
    if(n==0)
    {
        return (1);
    }
    else
        {
            f=n*(factorial(n-1));
        }
        return f;
}
