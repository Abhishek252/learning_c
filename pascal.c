#include<conio.h>
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter the number of lines for the pascal triangles");
    scanf("%d",&n);
    printf("\n%d lines of pascal triangle is \n ",n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<i;k++)
            printf("%d",k);
        for(k=i;k>=1;k--)
            printf("%d",k);
        printf("\n ");
    }
    return 0;
}
