#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    {
        for(i=1;i<=4;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("%d\n",j);
                exit(0);

            }
            printf("\n");

        }
    }
    return 0;
}
