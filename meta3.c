#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4; i++)
    {
        for(j=1;j>=3;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
