#include<stdio.h>
enum Level
{
    Low,
    Medium,
    High
};
int main()
{
    enum Level myVar= Medium;
    printf("%d",myVar);
    return 0;

}

