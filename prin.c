#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter a marks\n");
    scanf("%d",&marks);
    switch(marks)
    {
    case 34:
        printf("Marks is 34");
        break;
    case 45:
        printf("Marks is 45");
        break;
    case 48:
        printf("Marks is 48");
        break;
    default:
        printf("Invalid");
    }
    return 0;
}
