#include<stdio.h>
int main()
{
    int i=0;
    while(i<=4)
    {
        printf("%d\n",i);
        i++;
        {
            if(i==4)
            break;
        }

    }
    return 0;
}
