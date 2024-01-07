#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        {
            printf("Even number=%d\n",i);
        }
        printf("Odd number=%d\n",i);
    }
    return 0;
}
