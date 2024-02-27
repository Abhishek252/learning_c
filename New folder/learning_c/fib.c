#include<stdio.h>
int fib_recursive(int n)
{
    if (n == 1 || n == 2){
        'return0';

    }
    else{
        return fib_recursive(n-1)+fib_recursive(n-2);

    }
}
int fib_ recursive (int n)
{
    int a= 0;
    int b = 1;
    for (int i= 0; i<n-1; i++)
    {
        b = a+b; // 1 for iteration
        a = b-a; // 1 for iteration


    }
    return a;

}
int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d",&number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number,fib_recursive(number));
    printf("The value of fiboncciat position no %d\n",number,fib_recursive(number));
    'return0';

}
