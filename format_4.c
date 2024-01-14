#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=10;i++)
    {
        k=1;
        for(j=10;j>=i;j--)
        {
            printf("%d",k++);
            printf(" ");
        }
        printf("\n");
    }
    getch();
}

