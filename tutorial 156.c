#include<stdio.h>
#include<conio.h>
int main()
{
    char num;
    printf("Enter a number positive or negetive\n");
    scanf("%c",&num);
    switch(num)
    {
    case 1:
        printf("Negetive number");
        break;
    default:
        printf("Positive");

    }
    return 0;
}
