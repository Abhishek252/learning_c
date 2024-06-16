#include<stdio.h>
int main()
{
    int arr[5] = {5,10,25,50, 15};
    int i;
    for(i=0; i<=4; i++)
    {
        printf("value of arr[%d] = %d\t,i,arr[i]");
        printf("address of arr[%d] = %u\n,i,&arr[i]");

        
    }
    return 0;
}