#include<stdio.h>
#include<conio.h>
int divide(int);
int main()
{
    int n,m;
    printf("Enter a number\n");
    scanf("%d",n);
    m=divide(n);
    printf("divide=%d",m);
    getch();
    return 0;

}
int divide (int n)
{
    int c;
    if(n==1)
    {
        return 1;

    }
    else
    {
        c=n/divide(n-1);
        return c;
    }
}
