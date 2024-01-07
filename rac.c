#include<stdio.h>
#include<conio.h>
int main()
{
    int i,s1=0,s2=0;
    for(i=0;i<5;i++)
    {
        if(i<=3)
            s1=s1+1;
        else
            goto abc;

    }
    abc:
        s2=s2+1;
        printf("%d%d",s1,s2);
        getch();
}
