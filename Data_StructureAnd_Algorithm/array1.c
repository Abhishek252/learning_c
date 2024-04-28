#include<stdio.h>
int main()
{
    int arr[10], i, sum =0;
    float avg;
    printf("Enter 10 numbers");
    for(int i = 0; i <= 10; i++)
    {
        scanf("%d", &arr[10]);

        for(i = 0; i<= 10; i++)
        
            sum = sum + arr[i];
            avg  = sum/10.0;
            printf("Average is %f", avg);
            printf("\n");


        
    }
    return 0;
}