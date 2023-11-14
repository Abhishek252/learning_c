#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,i;
    clrscr();
    printf("Enter any number for Table & Limit for table\n");
    scanf("%d%d",&n,&m);
    for(i=0; i<=m; i++)
    {
        printf("%d*%d = %d\n",n,i,n*i);
    }

    getch();
}
