#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int sum=0;
    for(i=1;i<=10;i++)
    {
        sum=sum+1;
        if(i==5)
            goto label;

    }
    label:
        printf("%d\n",sum);
}
