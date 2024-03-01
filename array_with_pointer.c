#include<stdio.h>
#include<conio.h>
int main()
{
    int myNumbers[4] = {100, 200, 300, 400, 500};
    *myNumbers = 17;
    *myNumbers  = 27;
    printf("%d\n",*(myNumbers ));
    printf("%d\n",*(myNumbers));
    return 0;
}
