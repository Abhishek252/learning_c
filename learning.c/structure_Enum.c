#include<stdio.h>
#include<string.h>

enum days {Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main()
{
    for(int i=Sunday; i<=Saturday; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}