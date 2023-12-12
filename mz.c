#include<stdio.h>
#include<conio.h>
int divide(int );
int main()
{
    int n,m;
    printf("Enter a number\n");
    scanf("%d",&n);
    m=divide(n);
    printf("Divide id %d\n",m);
    return 0;
    getch();

}
int divide(int n)
{
    int c;
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n/divide(n-1));
    }
}
