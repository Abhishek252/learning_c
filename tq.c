#include<stdio.h>
#include<conio.h>
void add(int ,int);
int main()
{
    int a,b;
    printf("Enter first value");
    scanf("%d",&a);
    printf("Enter secound value");
    scanf("%d",&b);
    add(a,b);

}
void add(int x,int y)
{
    int z;
    z= x+y;
    printf("\n Addition is %d",z);

}
