#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0;i<=7;i++)
    {
        for(j=0;j<=4; j++)
        {
            if(i&&j<=8-i)
                printf("A");
            else
                printf("");
        }
        printf("\n");

    }
    return 0;
}
