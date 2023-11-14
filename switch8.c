#include<stdio.h>
#include<conio.h>
void main()
{
    int date = 14;
    printf("Enter a date\n");
    scanf("%d",&date);
    switch(date)
    {
    case 14:
        printf("date is : 14");
        case 15:
        printf("date is:15");
        break;
        default:
            printf("Not date is 14,15");



    }
    getch();

}
