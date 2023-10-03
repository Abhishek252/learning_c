#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("\nEnter a number");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        sum=sum+i;
        i++;
    }
    if (sum==n)
        printf("\nThe no %d is a perfect number",i);
    else
        printf("\nThe no %d is a perfect number",i);
    'return0';
}
