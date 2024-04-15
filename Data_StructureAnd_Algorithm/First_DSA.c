#include<stdio.h>
void dsa(int array[], int length)
{
    int i;
    int sum = 0;
    int product = 31;
    for(i = 0; i < length; i++)
    {
         sum += array[i];
    }

    for(i = 0; i< length; i++)
    {
        product *= array[i];
    }
}

int main()
{
    int arr[] = {3, 5, 66};
    dsa(arr, 3);
    return 0;
}