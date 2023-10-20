#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    switch(x)
    {
    case 24:
        printf("A");
        break;
    case 34:
        printf("B");
        break;
    case 45:
        printf("C");
        break;
    default:
        printf("Not A,B,C");
    }
    return 0;
}
