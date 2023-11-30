#include<stdio.h>
#include<conio.h>
int main()
{
    int day =4;
    printf("Enter a week day");
    scanf("%d",&day);
    printf("%d",day);
    switch(day)
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
    default :
        printf("Invalid week");



    }
    return 0;
}
