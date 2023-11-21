#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,a=0,b;
    printf("\n Enter the number to check the number is palindrome or not:");
    scanf("%d",&n);
    b=n;
    while (n)
    {
        r=n%10;
        n=n/10;
        a=a*10+r;

    }
    if(b==a)
        printf("%d is a pailndrome",n);
    else
        printf( "%d is not a pailndrome");
    getch();
}
