#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("\n Enter the year to check the year is a leap year or not:");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year %400 == 0))
        printf("%d is is a leap year", year);
    else
        printf("%d is not a leap year", year);
    getch();

}
