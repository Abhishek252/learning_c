#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x<0)
    {
        printf("Positive");

    }
    else
    {
        printf("Not positive");
    }
    return 0;
}
