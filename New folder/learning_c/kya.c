#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter an integer number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d natural number=%d\n ",num,sum);
    return 0;
}
