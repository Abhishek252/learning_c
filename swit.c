#include<stdio.h>
int main()
{
    int marks = 45;
    printf("Enter your marks\n");
    scanf("%d",marks);
    printf("%d",marks);

    switch(marks)
    {
    case 1:
        printf("The marks is :45");
        break;
    case 2:
        printf("the marks is :68");
    case 3:
        printf("the marks is: 79");

    }
    return 0;
}
