
#include<stdio.h>
int main()
{
    int day = 4;
    printf("Enter day");
    scanf("%d", &day);
    switch(day)
    {
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Thusday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thursday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Saturday");
    }
    return 0;

}