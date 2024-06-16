#include<stdio.h>
int main()
{
    int i[4] = {1,2,3,4};
    printf("the element in array After initializtion\n");
    for(int j=0; j<4; j++)
    {

        i[j]=j;
        printf("\n[%d] = %d", j,i[j]);
    }
}