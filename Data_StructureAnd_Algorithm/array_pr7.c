#include<stdio.h>
int main()
{
    int marks[2][3] = {{34, 56, 67}, {89, 90, 99}};
    int i,j;
    for(i= 0; i<2; i++)
    {
        for(j= 0; j<3; j++)
        {
            printf("thr marks is %d\n", marks[i][j]);
        }

    }
    return 0;
}