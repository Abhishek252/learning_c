#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter marks");
    scanf("%d",&marks);
    switch(marks)
    {
    case 45:
        printf("Marks is 45");
        break;
    case 46:
        printf("Marks is 46");
        break;
    case 50:
        printf("Marks is 50");
            break;
    default:
        printf("The marks is not 45,46 and 50");

    }
    getch();
}
