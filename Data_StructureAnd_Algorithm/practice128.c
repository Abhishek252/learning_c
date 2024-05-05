#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d\n", &a);
    if(a %2 == 0)
    {
        printf("the value is even");
    }else{
        printf("the value is odd");

    }

    return 0;
}