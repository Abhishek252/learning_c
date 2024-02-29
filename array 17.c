#include<stdio.h>
#include<conio.h>
int main()
{
    int x[2][5]={{12,13,14,15,16},{17,18,19,20,21}};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\n",x[i][j]);
        }
    }
    return 0;
}
