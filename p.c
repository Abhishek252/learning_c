#include<stdio.h>
#include<stdlib.h>
int main()
{
    int option, n1, n2;
    float result;
    char ch;
    while(1)
    {
        printf("Select any one operaton");
        printf("to perform the calculation");
        printf("in C Calculator:");
        printf("\n 1.Addition\n 2.Subtraction");
        printf("\n 3.Multiplication\n 4.Division");
        printf("\n 5.Exit");
        printf("Choose one option:");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("FOR Addition");
            printf("\nEnter First Number:");
            scanf("%d",&n1);
            printf("Enter Second Number:");
            scanf("%d",&n2);
            result = n1+ n2;
            printf("Addition = %.of",result);
            break;
        case 2:
            printf("For Subtraction");
            printf("\n Enter first Number:");
            scanf("%d",&n1);
            printf("Enter Second Number:");
            scanf("%d",&n2);
            result = n1 - n2;
            printf("Subtraction = %.of",result);
            break;
        case 3:
            printf("For Multiplication");
            printf("\n Enter First Number:");
            scanf("%d",&n1);
            printf( "Enter second Number:");
            scanf("%d",&n2);
            result = n1-n2;
            printf("Subtraction = %.of",result);
            break;
        case 4:
            printf("For Division");
            printf("\n Enter First Number:");
            scanf("%d",&n1);
            printf("Enter Second Number:");
            scanf("%d",&n2);
            if (n2 ==0)
            {
                printf("\n Division cannot be zero.");
                scanf("%d",&n2);
            }

            result= n1 /n2;
            printf("Quotient=%.of",result);

            break;
        case 5:
            printf("Exited");
            exit(0);
            break;
        default:
            printf("Invalid Option!");




        }


    }
    return 0;
}
