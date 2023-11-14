#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);
    switch(marks)
    {
        case 45:
        printf("Your marks is : 45");
        case 50:
            printf("Your marks is : 50");
        case 60:
            printf("Your marks is :60");
            break;
        default:
            printf("Invalid marks");



    }
    return 0;
}
