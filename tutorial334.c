#include<stdio.h>
#include<conio.h>
void subtraction (int ,int);
int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    subtraction(a,b);
    return 0;
}
void subtraction(int x,int y)
{
    int z;
    z=x-y;
    printf("subtraction of =%d\n",z);
}
