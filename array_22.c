#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5]={11,12,13,14};
    arr[4]=20;
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
