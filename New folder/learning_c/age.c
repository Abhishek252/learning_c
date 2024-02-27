#include<stdio.h>
int main()
{
    int age;
    printf("\n Enter your age");
    scanf("%d",&age);
    if(age>= 18)
    {
        printf("Eligible for voting age\n");
    }
    else
    {
        printf("Not Eligible for voting age\n");

    }
    return 0;
}
