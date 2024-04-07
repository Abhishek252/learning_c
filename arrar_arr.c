#include<stdio.h>
int main(){

    int arr[5] = {1,2,3,4,5};
    int _arr[5] = {1,2,3,4,5};
    int i,j;
    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            printf("%d%d\n", i,j);
        }
        printf("\n");

    }
    return 0;
}