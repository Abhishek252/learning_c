#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=4; i++)
    {
        for(j=1;j<=6; j++)

        {
            if(j>=i&&j<=8-i)
                printf("%d",k);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
