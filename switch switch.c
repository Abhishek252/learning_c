#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter week\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printF("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printF("Tuesday");
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
        break;
        default:
            printf("Input Wrong");


    }
    getch();
}
