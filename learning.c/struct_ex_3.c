#include<stdio.h>
int main()
{
    struct value
    {
        int bit1: 1;
        int bit3: 4;
        int bit4: 4;

    }bit ;
    printf("%d\n", sizeof(bit));
    return 0;
}