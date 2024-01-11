#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,change(int*, int*);
    printf("\n Enter values of X and Y:");
    scanf("%d%d",&x,&y);
    change(&x,&y);
    printF("\n In main() x=%d and y=%d");
    getch();
}
change(int*a , int*b)
{
    int*k;
    *k=*a;
    *a=*b;
    *b=*k;
    printf("\n In change() X=%d and Y=%d",*a,*b);
    return 0;
}
