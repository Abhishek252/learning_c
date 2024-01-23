#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("Max number =%d\n",a);
    }
    else
    {
        printf("Max number =%d\n",b);
    }
    getch();
}

