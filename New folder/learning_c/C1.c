#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%5==0 && x%4==0)
    {
        prnitf("Divisible by 5&4");

    }
    else
    {
        printf("Not divisible by 5&4");
    }
    getch();
}
