#include<stdio.h>
#include<conio.h>
int main()
{
    int MyNumbers[]={25,50,75,100,55};
    int length= sizeof(MyNumbers)/sizeof(MyNumbers[0]);
    printf("%d",length);
    getch();
}
