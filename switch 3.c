#include<stdio.h>
#include<conio.h>
void main()
{
    int  week;
    printf("Enter a week name\n");
    scanf("%d",&week);
    switch(week)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("Friday");
        break;
        case 6:
        printf("Surday");
        break;
    case 7:
        printf("Sunday");
    default:
        printf("What is your week anyway?\n");
        break;

    }
    getch();
}
