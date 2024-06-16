#include<stdio.h>
#define Size 10

int isEven(int k);
int main()
{
    
    int arr[Size] = {12,15,20,17,25,50,11,10,38,13};
    int i;

    printf("\t *** Cheaking for even or odd number by sing call by value ***\n");
    for(i=0; i<Size ; i++)
    {
        if(isEven(arr[i]))
        {

            printf("Number %d is even ", arr[i]);

        }
       
       else
       {
        printf("Number %d is odd", arr[i]);

       }
       printf("\n");
    }
    return 0;
}

int isEven(int k)
{
    if(k % 2 == 0)
    return k;
    else
    return 0;
}