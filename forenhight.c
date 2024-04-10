#include<stdio.h>

int main()
{
    float f,c;
    printf("enter number");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("%f\n", c);
    return 0;
}