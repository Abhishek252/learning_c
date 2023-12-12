#include<stdio.h>
#include<conio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    getch();
    return 0;
}
int sum(int n)
{

    if(n==1)
        return 1;
    return n+sum(n-1);
}
