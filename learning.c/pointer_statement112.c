#include<stdio.h>
int main()
{
    int data[100];

    int *p1;
    int *p2;
    int i;
    for(i = 0; i < 100; i++)
    {
        data[i] = i;

    }

    p1 = &data[i];
    p2 = &data[i];

    if(p1>p2)
    {
        printf("\n\n p1 is greater then p2");
    }
    else{
        printf("\n p2 is greater then p1");
    }

    return 0;
}