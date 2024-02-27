#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,same=1,t=1;
    for(i=1;i<=4;i++)
    {
        for(k=same;k<=4;k++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%d",t);
            t=t+2;

        }
        t=1;
        same=same+1;
        printf("\n");
    }
    same=1;
    t=1;
    for(i=3;i<=1;i--)
    {
        for(k=same;k>=0;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",t);
            t=t+2;
        }
        t=1;
        same=same+1;
        printf("\n");
    }
    getch();

}
