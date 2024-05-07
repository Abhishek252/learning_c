#include<stdio.h>
#include<conio.h>
int main()

{
    int arr[5]  = {4, 5, 7, 8,9};
    arr[0] =56;
    arr[1] =57;
    arr[2] =58;
    arr[3] =59;
    arr[4] =50;
    for(int i=0; i<5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
    
}