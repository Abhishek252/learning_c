#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,change(int ,int);
    printf("\n Enter values of X and Y:");
    scanf("%d%d",&x,&y);
    change(x,y);
    printf("\n In main() X=%d and y=%d",x,y);
    getch();


}
change (int a,int b)
{
    int k;
    k=a;
    a=b;
    b=k;
    printf("\n In change () X=%d and y=%d",a,b);
}
