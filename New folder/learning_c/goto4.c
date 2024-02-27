#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("even ");

    }
    else
    {
        printf("odd");
    }
    exit(0);
    printf("End of the program\n");
    return 0;
}
