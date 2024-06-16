#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("Enter the array element ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        check(arr[i]);

    }
}

void check (int num)
{
    if(num %2 == 0)
    {
        printf("%d\n even number", num);
    }

    else{
        printf("%d is odd \n", num);
    }
}