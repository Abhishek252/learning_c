#include<stdio.h>
int main()
{
    int matrix[3][3];
    int i,j;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
    {
        printf("Enter 2D array \n");
        sacanf("%d",&a[i][j]);
    }
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3;j++)
            printf("%d\t",a[i][j]);
    }
    return 0;

}
