#include<stdio.h>
#include<string.h>

struct time
{

    int hourse;
    int second;
    int minute;
};

int main()
{
    struct time t1;
    t1.hourse = 24;
    t1.second = 12;
    t1.minute = 2;

    printf("hourse %d\n", t1.hourse);
    printf("second %d\n",t1.second);
    printf("minute %d\n", t1.minute);
    return 0;
}
