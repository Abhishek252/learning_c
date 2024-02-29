#include<stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number -1));
    }
}
int main()
{
    int number;
    printf("Enter the number you want the factorial of \n");
    scanf("%d",&number);
    printf("the factorial of %d is %d\n",number, factorial(number));
    return 0;
}
