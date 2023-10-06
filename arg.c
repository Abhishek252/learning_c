#include<stdio.h>
#include<stdlib.h>
int main()
{
    int option a, b, c;
    while (1)
}
 printf("\n 1.Addition");
 printf("\n 2.Subtraction");
 printf("\n 3.Multiplication");
 printf("\n 4.Division");
 printf("\n 5.Exit");
 printf("\n\n Enter your option: ");
 scanf("%d", &option);

 switch(option)
 {
 case 1:
    printf("For Addition")
    printf("\n\n Enter two numbers:");
    scanf("%d%d",&a,&b);
    c = a + b;
    printf("%d",s);
    break;
 case 2:
    printf("For Substraction");
    printf("\n\n Enter two numbers:");
    Printf("%d%d", &a,&b);
    c = a - b;
    printf("%d",c);
    break;
 case 3:
    printf("For multiplication");
    printf("\n\n Enter two number:");
    printf("%d%d", &a,&b);
    c = a * b;
    printf("%d",c);
    break:
 case 4:
    printf("For Division");
    printf("\n\n Enter two number");
    printf("%d%d", &a,&b);
    c = a / b;
    printf("%d",c);
 case 5:
    printf("Exited");
    exit(0);
    break;
 default:
    printf("Invalid option");




 }
 return 0;

}
