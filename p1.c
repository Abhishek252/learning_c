#include<stdio.h>
#include<stdlib.h>
int main()
{
    int option, a,b,c;
    while(1)

}
{
    printf("Choose any one option");
    printf("to perform the calculation");
    printf("in C Calculator:");
    printf("\n 1.Addition\n 2.subtraction");
    printf("\n 3.Multiplication\n 4.Division");
    printf("\n 5.exit");
    printf("\n\n Enter your option:");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        printf("\n\n Enter two number:");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("Addition is %d",c);
        break;
    case 2:
        printf("For subtraction");
        printf("\n\n Enter two number:");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("Subtraction is %d",c);
        break;
    case 3:
        printf("For Multiplication");
        printf("\n\n Enter two number:");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("Multiplication is %d",c);
        break;
    case 4:
        printf("For Division");
        printf("\n\nEnter two number:");
        scanf("%d%d",&a,&b);
        c=a/b;
        printf("Division is %d",c);
        break;
    case 5:
        printf("Exitad");
        exit(0);
        break;
    default:
        printf("Invalid choice");



    }
     return 0;

}
