#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{   int a=RED;
    int b= WHITE;
    int i;
    textcolor(RED);
    textbacground(WHITE);
    for(i =0; i<=120; i++)
    {
        cprintf("I Love You\t");
        delay(200);
    }
    getch();
}
