#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0; i<=4;i++)
    {
        for(j=0; j<=6; j++)
        {
            if(j>=i&&j<=8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
