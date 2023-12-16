#include<stdio.h>
#include<conio.h>
void main(void)
{
    int n,i,j,k;
    printf("Enter the number of lines for the pascal tringle");
    scanf("%d",&n);
    printf("\n%d lines of pascal triangle is\n  ",n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf(" ");
        for(k=1; k<i;k++)
            printf("%d",k);
        for(k=i;k>=1;k--)
            printf("%d",k);
        printf("/n");
    }
    getch();

}

