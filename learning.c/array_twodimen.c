#include<stdio.h>
int main()
{
    int a[3][4] = {{1,2,3,4},{11,12,13,14}};
    int i,j;
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=3; j++)
        printf("\na[%d][%d] = %d ", i,j,a[i][j]);
        printf("\n");
    }
    return 0;
}