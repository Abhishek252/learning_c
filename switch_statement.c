#include<stdio.h>
int main()
{
    int day;  // M,T,W,T,F,S,S 
    int year;
    printf("Enter year");
    scanf("%d",&year);
    printf("Enter day (1-7):");

    scanf("%d",&day);
    switch(day){
    switch(year){
          case 1: printf("2020");
                  break;
          case 2: printf("2021");
                  break;
          case 3: printf("2022");
                  break;
          case  4: printf("2023");
                  break;
           case 5: printf("2024");
                   break;              
    }
    
        case 1: printf("monday\n");
                break;
        case 2: printf("tuesday\n");
                break;
        case 3: printf("wednesday\n");
                break;
        case 4: printf("thursday\n");
                break;
        case 5: printf("Friday\n");
                break;
        case 6: printf("saturday\n");
                break;
        case 7: printf("sunday\n");
                break;
        default : printf("This not valid");
               
        return 0;

    }
}