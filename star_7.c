#include<stdio.h>
#include<conio.h>
void substract();
int main()
{
    substract();
    return 0;

}
void substract()
{
    int a,b,c;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("Substract  of = %d",c);
}
