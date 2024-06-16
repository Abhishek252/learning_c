#include<stdio.h>
int main()
{
    enum month { january = 1, febuary, march, apirl, jun, july, august, september, october, november, december};

    for(int i=january; i<=december; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}