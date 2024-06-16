#include<stdio.h>
int main()
{
    int a[4][4], i, j,max;
    printf("Enter element in matrix");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(max <a[i][j])
            {
                max = a[i][j];
            }
        }

    }
    printf("largest element = %d", max);
    return 0;

}