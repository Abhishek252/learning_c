#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter anumber");
    scanf("%d", &a);
    if(a%4 == 0)
    {
        printf("the number is positive");
    }
    else{
        printf("the number is negetive");
    }
    return 0;
}