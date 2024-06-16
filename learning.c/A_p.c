#include<stdio.h>
int main()
{
    int a[5]= {10,20,30,40,50};
    int i;
    for(i=0; i<5; i++)
    {
        printf("\n is stored at location %d ", a[i], &a[i]);

    }
    return 0;
}