
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("x");
            printf(" ");
        }
        printf("\n");
    }
    getch();
}
