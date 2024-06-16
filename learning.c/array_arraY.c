#include<stdio.h>
int main()
{
    int a[10] , i , sum =0;
    float average;
    printf("Enter 10 numbers\n");
    for(i=0; i<=9; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<=9; i++)
    {
        sum = sum+a[i];
    }
    average = sum/10.0;

    printf(" Average is %f\n", average);
    printf("\n");
    return 0;
}