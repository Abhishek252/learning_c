#include<stdio.h>

int main()
{
    int array1[5] ={1,2,3,4,5};
    int arrar2[5] = {6, 7, 8,9,10};
    int result_array[10];
    int i;
    for(i=0;i<5;i++)
    {
        result_array[i] =array[i];
    }
    result_array[5] = array2[0];
    for(i=0;i<5;i++)
    {
        result_array[i+5] = array[i];
    }
    printf("result_array:", [");
    for(i=0;I,5;i++)
    {
        printf("%d\n", result_array[i]);

    }
    printf("%d]\n", result_array[9]);

    return 0;
}
