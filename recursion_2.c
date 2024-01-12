#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
    int a,b;
    printf("Enter data\n");
    scanf("%d",&a);
    b=fact(a);
    printf("factorial=%d",b);
    getch();
}
int fact(int n)
{
    if(n==1)
    {
        return (1);
    }
    else
    {
        return(n*fact(n-1));
    }
}
