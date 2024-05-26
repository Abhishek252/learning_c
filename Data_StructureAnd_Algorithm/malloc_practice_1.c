#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(5* sizeof(int));
     
    ptr[0]= 5;
    ptr[1]= 4;
    ptr[2]= 3;
    ptr[3]= 2;
    ptr[4]= 1;

    for(int i=0; i<5; i++)
    {
        printf("%d\n", ptr[i]);

    }
    return 0;
}