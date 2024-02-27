#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a;
    printf("Enter any number ");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
    return 0;
}
