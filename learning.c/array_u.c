#include<stdio.h>
#define Size 12
void main()
{
    int a[Size] = {1,3,5,4,7,2,99,16,45,67,89,45};

    int i, total =0;
    printf("sum of element of array\n");
    for(i=0;i<=Size ; i++)
    {
         printf("\n[%d] = %d", i,a[i]);
         total +=a[i];
    } 

    printf("\n\n \t sum of array element is :- %d\n", total);
    getch();
}