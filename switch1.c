#include<stdio.h>
#include<conio.h>
void main()
{
    int n;

    printf("Enter month number\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("JANUARY");
        break;
    case 2:
        printf("FEBRUARY");
        break;
    case 3:
        printf("MARCH");
        break;
    case 4:
        printf("APIRL");
        break;
    case 5:
        printf("MAY");
        break;
    case 6:
        printf("JUN");
        break;
    case 7:
        printf("JULY");
        break;
    case 8:
        printf("AUGUST");
        break;
    case 9:
        printf("SEPTEMBER");
        break;
    case 10:
        printf("OCTOBER");
        break;
    case 11:
        printf("NOVEMBER");
        break;
    case 12:
        printf("DECEMBRE");
        break;
    default:
        printf("INVALID MONTH NUMBER \n PLEASE TRY AGAIN");




    }
    getch();
}
