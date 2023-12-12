#include<stdio.h>
#include<conio.h>
int sub(int);
int main()
{
    int n,m;
    printf("Enter a number\n");
    scanf("%d",&n);
    m=sub(n);
    printf("Sub=%d",m);
    getch();
    return 0;
}
int sub(int n)
{
    int c;
    if(n==1)
    {
        return 1;
    }
    else
    {
        c=n-sub(n-1);
        return c;

    }
}
