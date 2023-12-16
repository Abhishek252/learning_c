#include<stdio.h>
#include<conio.h>
void subtraction();
int main()
{
    subtraction();
    return 0;
}
void subtraction()
{
    int x,y,z;
    printf("Enter two number\n");
    scanf("%d%d",&x,&y);
    z=x-y;
    printf("Subtraction is %d",z);

}
