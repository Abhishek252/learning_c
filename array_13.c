#include<stdio.h>
#include<conio.h>
int main()
{
    int age[]={12,13,14,15,16};
    int length= sizeof(age)/ sizeof (age[0]);
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",age[i]);
    }
    getch();
}
