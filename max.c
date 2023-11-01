#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter two numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("\n max Number = %d",a);

    }
    else
    {
        printf("\n max Number = %d",b);
    }
    return 0;
}
