#include<stdio.h>
#include<conio.h>
int main()
{
    int marks [5]= {100, 200, 300, 400, 500};
    marks[0] = 34;
    marks[1] = 56;
    marks[2] = 67;
    marks[3] = 89;
    printf("the marks is %d\n", marks[0]);
    printf("the marks is %d\n", marks[1]);
    printf("the markds is %d\n", marks[2]);
    printf("the marks is %d\n", marks[3]);
    getch();
    return 0;  
}
