#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=0;i<=10; i++)
    {
        if(i%2==0 )
        {
            printf("Even number= %d\n",i);
        }
        else
        {
            printf("Odd number= %d\n",i);
        }
    }
    getch();
}
