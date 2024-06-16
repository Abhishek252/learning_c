#include<stdio.h>
int main()
{
    int a[5][10]= {{1,2,3,4,5}, {6,7,8,9,10}};
    int *p , i,j;
    p = &a;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("a[%d][%d] =%d\n", i, j, a[i][j] );
        }

        return 0;
    }



}