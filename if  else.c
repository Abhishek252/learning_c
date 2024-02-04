#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>18)
    {
        printf("Eligible for vote\n");

    }
    else
    {
        printf("Not Eligible for vote\n");
    }
    getch();
}
