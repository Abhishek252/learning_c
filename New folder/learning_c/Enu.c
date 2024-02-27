#include<stdio.h>
enum Level
{
    Low=5,
    Medium,
    High
};
int main()
{
    enum Level x= High;
    printf("%d",x+1);
    return 0;
}
