#include<stdio.h>
#include<conio.h>
int main()
{
    int myNumber[]= {23,35,67,68};
    myNumber[0]=33;
    printf("%d\n",myNumber[0]);
    getch();
}
//Now output 33 instead of 23
