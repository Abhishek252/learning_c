#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    if(age>18)
    {
        printf("\nEligible for vote");
    }
    else
    {
        printf("\n Not Eligible for vote");
    }
    return 0;
}
