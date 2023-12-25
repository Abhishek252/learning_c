#include<stdio.h>
#include<conio.h>
#define square(x) ((x)*(x))
#define CUBE(x) (square (x)*(x))
int main()
{
    int ans ;
    ans = CUBE (2);
    printf("ans is %d", ans);
    #undef CUBE
    getch();
}
