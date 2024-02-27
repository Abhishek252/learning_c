#include<stdio.h>
enum Level
{
    LOW,
    MEDIUM,
    HIGH



};
int main()
{
    enum Level x=MEDIUM;

    switch(x)
    {
    case 1:
        printf("LOW\n");
    case 2:
        printf("MEDIUM\n");
    case 3:
        printf("HIGH\n");
        default:
        printf("Not LOW,MEDIUM,HIGH\n");
    }
    return 0;
}
