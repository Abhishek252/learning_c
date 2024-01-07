#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j>=i;j--)
        {
            printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}
