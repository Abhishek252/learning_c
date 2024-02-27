#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==4)
        {
            printf("%d\n",i);
            continue;
        }
    }
    getch();
}
