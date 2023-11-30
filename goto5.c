#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter a Number");
    scanf("%d",&x);
    printf("%d",x);
    {
        if(x>12)
        {
            printf("The number is even");
        }
        else
        {
            printf("The number is odd");
        }
        exit(0);
        printf("The program is end");
    }
    return 0;
}


