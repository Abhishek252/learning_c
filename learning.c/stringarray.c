#include<stdio.h>
int main()
{
    int arr [5][10] = {{1,2,3,4,5},{2,6,7,8,9}};
    int i, j;
    for(i=0; i<5; i++)
    {  
        for(j=0; j<5; j++)
    {
        printf("a[%d][%d] = %d\n", i,j,arr[i][j]);
    }
    }
    return 0;
}