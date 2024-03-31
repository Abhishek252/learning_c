#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c;
    float avg;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    avg =(a+b+c)/3.0;
    printf("the average of three numbers %f",avg );
    getch();
}
