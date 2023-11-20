#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j, num, v1=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",v1);
            if(v1==1)
                v1=0;
           else
                v1=1;
        }
        printf("\n");

    }
    getch();
}
