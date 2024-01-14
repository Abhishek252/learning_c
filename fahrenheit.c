#include<stdio.h>
#include<conio.h>
void main()
{
    float f,c;
    printf("enter degree in fahrenheit");
    scanf("%f",&f);
    c=(float) 5/9*(f-32);
    printf("celsius = %f",c);
    getch();
}
