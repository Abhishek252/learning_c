#include<stdio.h>
#include<conio.h>
int main()
{
    int x = 10;
    int *y, **r, ***t;
    y = &x;
    r = &y;
    t = &r;
    printf("%d\n %d\n %d\n", y, r, t);
    printf("%d\n %d\n %d\n", *y, **r, ***t);
    return 0;
}
