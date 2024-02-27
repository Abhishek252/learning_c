#include<stdio.h>
#include<conio.h>
void multiplication();
int main()
{
    multiplication();
    return 0;
}
void multiplication()
{
    int x,y,z;
    printf("Enter two number\n");
    scanf("%d%d",&x,&y);
    z=x*y;
    printf("multiplication of =%d",z);
}
