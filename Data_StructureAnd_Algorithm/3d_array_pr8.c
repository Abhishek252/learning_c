#include<stdio.h>
int main()
{
    int marks[2][3][5] = {{1, 2, 3},{4,5,6},{7,8,9}};
    int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<5;k++)
            {
                printf("the marks is %d\n", marks[i][j][k]);
            }
        }
    }
    return 0;
}