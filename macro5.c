#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
    int r;
    float a;
    printf("Enter radius of a circle");
    scanf("%d\n",&r);
    a= PI*r*r;
    printf("Area of circle is %f",a);
    getch();
}
