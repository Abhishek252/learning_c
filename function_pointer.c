#include<stdio.h>
#include<conio.h>
int addition (int a, int b)
{
    return a + b;

}

int subtraction(int a, int b)
{

    return a - b;

}

void main()
{
    int val;
    int function;
    function = addition;
    val =  (20, 100);
    printf("\n Addition  result = %d", val);
    val = (200, 100);
    printf("\n subtraction result = %d", val);
    getch();
    return 0;

}