#include<stdio.h>
int main()
{
    int arr[] = {11, 12, 13, 14,15};

    printf("The value of address is %d\n", arr+1);
    printf("The value of address is %d\n", &arr);
    printf("The value of address is %d\n", arr[0]);
    printf("The value of address is %d\n", &arr[0]);
    printf("The value of address is %d\n", arr[1]);
    printf("The value of address is %d\n", arr[1]);
    printf("The value of address is %d\n", arr);


    printf("The value of address is %d\n", *(&arr[1]));
    printf("The value of address is %d\n", *(arr+1));
    printf("The value of address is %d\n", &arr-1);
    



    return 0;
}