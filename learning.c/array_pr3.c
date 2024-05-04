#include<stdio.h>
int main()
{
    int i = 34;
    int *ptr  = &i;
    printf("the value of ptr is %u\n", ptr[0]);

    ptr++;
    printf("the value of ptr is %u\n", ptr[0]);

    return 0;


}