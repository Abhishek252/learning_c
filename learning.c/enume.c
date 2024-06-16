#include<stdio.h>
int main()
{
    enum days {sunday = 1, monday,  thuesday, wednesday, thursday, friday, saturday};
    for(int i = sunday ;i<=saturday; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}