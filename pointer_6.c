#include<stdio.h>
#include<conio.h>
int main()
{
    int x[4]={35,34,33,32};   // Array with Pointer
    int *ptr=x;
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    return 0;
}

