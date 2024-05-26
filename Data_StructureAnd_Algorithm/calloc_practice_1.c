#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (float*)calloc(5, sizeof(float));

    ptr[0] = 1;
    ptr[1] =2;
    ptr[2]= 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for(int i=0; i<5; i++)
    {
        printf("%f\n",ptr[i] );

    }
    return 0;

}