#include<stdio.h>
int factorial (int number);
int main()
{
    int number;
    printf("Enter the number you want of\n");
    scanf("%d",&number);
    printf("the factorial of %d is %d\n",number, factorial(number));
    return 0;
}
int factorial(int number)
{
    if (number == 1|| number ==0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
