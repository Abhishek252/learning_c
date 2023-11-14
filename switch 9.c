#include<stdio.h>
#include<conio.h>
int main()
{
    int month = 1;
    printf("Enter a month");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
        printf("month is:1");
        break;
    case 2:
        printf("month is :2");
        break;
    default:
        printf("Not 1,2");
        break;
    }
    return 0;
}
