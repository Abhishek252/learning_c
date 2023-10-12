#include<stdio.h>
int main()
{
    int date;
    printf("Enter your date\n");
    scanf("%d",&date);
    printf("%d",date);
    switch (date)
    {
    case 12:
        printf("The date is:12");
        break;
    case 2:
        printf("The date is:13");
        break ;
    case 3:
        printf("The date is:25");
        break;
    default:
        printf("The date is not: 12,13 or 25");
    }
    return 0;
}
