#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,f= 1;
    printf("Enter any number\n");
    scanf("%d",&i);
    for(i=0; i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial= %d ",f);
    return 0;
}
