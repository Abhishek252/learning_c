#include<stdio.h>
int main()
{
    int arr[5] = {3,4,6,2,1};
    int *p=arr;
    int *q=arr+2;
    int*r = &arr[1];

    printf("%d\n%d\n%d\n", arr[2], *(arr+2), *r);
    printf("\n%d\n%d\n%d\n", *p, *(q+1), *(r+1));
    return 0;

}