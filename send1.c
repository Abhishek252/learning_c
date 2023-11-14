#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<20; i++)
    {
        if(i==10)
        {
            continue;
        }
        else
        {
            printf("%d\n",i);
        }

    }
    return 0;

}
