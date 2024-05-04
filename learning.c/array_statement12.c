#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[4];
    printf("Enter the value of strudent 1:" );
    scanf("%d", &marks[0]);
    printf("enter the value of student 2:");
    scanf("%d", &marks[1]);
    printf("Enter the value of student 3:");
    scanf("%d", &marks[2]);
    printf("enter the value of student 4:");
    scanf("%d", &marks[3]);

    printf("the value is %d\n", marks[0]);
    printf("the value is %d\n", marks[1]);
    printf("the value is %d\n", marks[2]);
    printf("the value is %d\n", marks[3]);
   
    return 0;

}