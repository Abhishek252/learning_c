#include<stdio.h>
int main()
{
    int num[5], i;
    printf("Sum using call by reference \n");

    printf("Element  of array are:\n");
    for(i=0; i<5; i++)
    {
        printf("number  %d is :" , i+1);
        scanf("%d", &num[i]);
    }

    add(num);
    return 0;
}   

void add(int *num)
{
    int sum =0,i;
    printf("\n----------\n\n");
    for(i=0; i<5; i++)
    sum +=num[i];
    printf("Sum of 5 number = %d \n", sum);
    
}