#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int  *p,i;
    p=&arr[0];  // p=arr
    for(i=0;i<5;i++)
    {
        printf("%d\n",(p+i));
    }
    return 0;

}
