#include<stdio.h>
#include<conio.h>
void  main()
{
    int x,y,change(int*,int*);
    printf("\n Enter values of X and y:");
    scanf("%d%d",&x,&y);
    change(&x,&y);
    printf("\n main() X=%d Y=%d",x ,y);
    getch();


}
change(int*a,int*b)
{
    int*k;
    *k=*a;
    *a=*b;
    *b=*k;
    printf("\n In change() X=%d y=%d ",*a,*b);
    getch();
}
