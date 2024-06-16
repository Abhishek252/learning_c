#include<stdio.h>
int main()
{  
    int a[10][10], b[10][10], c[10][10];
    int m,n,i,j;

    printf("Enter the size of matrix");
    scanf("%d %d", &m,&n);
    printf("Enter the element of matrix");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n;j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

    printf("enter the element of matrix");
    for(i=0; i<m;i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d ", &b[i][j]);
        }

    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            c  [i][j] = a[i][j]+b[i][j];
        }


    }

    printf("Enter the resultant matrix");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        printf("%d\n", c[i][j]);
    }

    printf("\n");

   return 0;

}