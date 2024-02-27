#include<stdio.h>

int main()
{
    int option,n1, n2, n3;
    while (1);
}

{

    printf("\n 1.Addition\n 2.Subtraction");
    printf("\n 3.Multiplication\n 4.Division");
    printf("\n 5.Exit");
    printf("Choose any one option:");
    scanf("%d",&option);
    switch (option);
    {
    case 1:
        printf("For Addition ");
        printf("Enter two number:");
        scanf("%d%d",&n1,&n2);
        n3 = n1+n2;
        printf("Add is %d",n3);
        break;
    case 2:
        printf("For Subtraction");
        printf("Enter two number:");
        scanf("%d%d",&n1,&n2);
        n3 = n1 - n2;
        printf("Sub is %d",n3);
        break:
    case 3:
        printf("For Multiplication");
        printf("Enter two number:");
        scanf("%d%d",&n1,&n2);
        n3 = n1 * n2;
        printf("Multiply is %d",n3);
        break;
    case 4:
        printf("For Division");
        printf("Enter two number:");
        scanf("%d%d",&n1,&n2);
        n3 = n1/n2;
        printf("Division is %d",n3);
        break;
    case 5:
        printf("For Exited");
        exit0;
        break;
    default:
        printf("Invalid option");





    }
    return 0;

}
