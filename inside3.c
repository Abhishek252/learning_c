#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a value ");
    scanf("%d",&x);
    printf("%d\n",x);
    if(x%2==0)
    {
        printf("Even");

    }
    else
    {
        printf("Odd");
    }
    return 0;


}
