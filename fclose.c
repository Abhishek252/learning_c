#include<stdio.h>
int main ()
{
    int month;
    printf("Enter a month");
    scanf("%d\n",month );
    switch(month)
    {
    case 1:
        printf("this month is 1");
        break;
    case 2:
        printf("this month is 2");
        break;
    default:
        printf("this month is not 1,2");

    }
    return 0;
}
