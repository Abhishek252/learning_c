#include<stdio.h>
#include<conio.h>

int main()
{

    int a,b, c;
    printf("enter three numbers");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b)
    {
        printf("a");
    }
    else if(a>c)
    {
        printf("b");
    }
    else
    {
        printf("c");
    }
    getch();
    return 0;
}
