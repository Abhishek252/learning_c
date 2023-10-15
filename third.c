#include<stdio.h>
int main()
{
    int Rollnumber;
    printf("Enter your Rollnumber");
    scanf("%d",Rollnumber);
    switch(Rollnumber)
    {
        case 5:
        printf("Rollnumber is : 5");
        break ;
        case 23:
        printf("Rollnumber is :23");
        break ;
        case 34:
        printf("Rollnumber is :34");
        break ;
        default:
        printf("Rollnumber is not:5,23or 34");

    }
    return 0;
}