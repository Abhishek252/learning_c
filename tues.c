#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int n,m;
    printf("Enter a number\n");
    scanf("%d",&n);
    m=sum(n);
    printf("sum =%d",m);
    getch();
    return 0;


}
int sum(int n)
{
    int c;
    if(n==1)
    {
        return 1;
    }
    else
    {
        c=n+sum(n-1);
        return c;

    }
}
