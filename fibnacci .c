#include<stdio.h>
#include<conio.h>
int fibnacci (int);
int main()
{
    int n;
    printf("Enter a number of term\n");
    scanf("%d",&n);
    printf("\n 0\n 1");
    fibnacci(n-2);
    getch();
    return 0;

}
int fibnacci (int n)
{
    int n1=0, n2=1,n3;
    if(n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
        fibnacci(n-1);
    }
}
