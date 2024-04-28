#include<stdio.h>
int main()
{
    int arr[3][4] ;
    int i,j;
    for(i = 0; i<=2; i++)
    {
        for(j= 0; j<=3; j++)
        scanf("%d\n", &arr[i][j]);
    }
    return 0;

}