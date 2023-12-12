#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("%d",x);
    {
        if(x%7==0||x%3==0)
        {
            printf("even");
        }
        else
        {
            printf("Odd");

        }

    }
    return 0;

}

