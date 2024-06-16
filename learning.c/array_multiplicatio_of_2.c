#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k, sum;
    int a[10][10], b[10][10], c[10][10];
    printf("enter the size of matrix");
    scanf("%d %d", &m,&n);
    printf("Enter the element of matrix");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

    printf("enter the size of matrix b");
    scanf("%d %d", &p, &q);
    printf("enter the size of matrix b");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d", &b[i][j]);

        }
    }

    if(n!=p)
    {
        printf("multiplication not possible");
        {
            for(i=0; i<m; i++)
            {
                for(j=0; j<q; j++)
                {
                    sum = 0;
                    for(k=0; k<n; k++)
                    
                
                sum = sum+a[i][k]*b[k][j];

            }
            c[i][j]= sum;

        }
        printf("the resultant matrix");
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                printf("%d", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}