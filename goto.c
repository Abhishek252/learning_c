#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10;
    LOOP:do
    {
        if(a==15)
        {
            a=a+1;
            goto LOOP;
        }
        printf("value of a: %d\n ",a);
        a++;
    }
    while(a<20);
    getch();
}

