#include<stdio.h>
#include<conio.h>
void main()
{
    int GRADE= 'L';
    switch(GRADE)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Good");
        break;
    case 'C':
        printf("Fine\n");
        break;
    case 'D':
        printf("Better\n");
        break;
    case 'F':
        printf("OK\n");
    default:
        printf("What is your grade anyway?\n");
        break;
    }
    getch();
}
