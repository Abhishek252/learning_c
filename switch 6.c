#include<stdio.h>
#include<conio.h>
int main()
{
     int day = 5;
     printf("Enter a day\n");
     scanf("%d",&day);
     switch(day)
     {
     case 5:
        printf("Friday\n");
        break;
     case 6:
        printf("Saturday\n");
        break;
     default:
        printf("What your day?\n");
     }
     return 0;
}
