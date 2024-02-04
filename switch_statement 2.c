#include<stdio.h>
#include<conio.h>
int main()
{
    int Grade='L';
    switch(Grade)
    {
        case 'A':
        printf("Excellent\n");
        break;
        case 'B':
        printf("Good\n");
        break;
        case 'C':
        printf("Best\n");
        break;
        case 'D':
            printf("Better\n");
            break;
        case 'E':
            printf("Fine\n");
            break;
        default:
            printf("What is your Grade anyway?\n");

    }
    return 0;
}
