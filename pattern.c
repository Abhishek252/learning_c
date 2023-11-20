#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1; i<=4;i++)
    {
        for(j=1;j<=6; j++)
        {
            if(j<=j+i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
