#include<stdio.h>
int main()
{
    int i=0;
    for(i=0;i<=10; i++)
    {
        if(i==5)
        {
            break;
        }
        else
        {
            printf("%d\n",i);

        }
    }
    return 0;
}
