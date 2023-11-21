#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,lines;
    printf("Enter a lines");
    scanf("%d",lines);

    for(i=1;i<=lines; i++)
    {
        for(j=1; j<=lines;j++)
        {
            if(j<=lines+1-1)
                printf("lines");
            else
                printf(" ");
        }
        printf("\n");

    }
    getch();
}
