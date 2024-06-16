#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter the data elment ");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d\n", &a[i][j]);

        }
    }
    printf("enter showing matrix");
    for(i=0; i<=2; i++)
    {
        for(i=0; i<=2; i++)
        {
            printf("%d\n", a[i][j]);
        }
        return 0;
    }
}