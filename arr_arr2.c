#include<stdio.h>
int main()
{
    int arr[3] = {1,2 , 3,4};
    int _arr[4] = {4, 5, 6, 7};
    int i, j;
    int x, y;
    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            printf("%d%d\n",i,j);
        }
        for(x=1;x<5;x++)
        {
            for(y=1;y<5;y++)
            {
                printf("%d%d\n", x,y);
            }
        }
        return 0;
    }
}
