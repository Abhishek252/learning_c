#include<stdio.h>
int main()
{
    int a[4][4],i,j, sum=0;
    printf("enter data in matrix");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)

        {
            sum = sum + a[i][j];

        }
    }

    printf("Sum of all element = %d", sum);
    return 0;
}