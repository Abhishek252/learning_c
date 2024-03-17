#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a;
    printf ("Enter any numer");
    scanf("%d",&n);
    while(n>20)
    {
        a=n%20;
        printf("%d",a);
        n=n/20;
    }
    getch();
}