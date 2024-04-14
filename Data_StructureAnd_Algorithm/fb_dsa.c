#include<stdio.h>
int main()
{
    int previous2 = 0, previous1 = 1;
    int newFibo;
    printf("%d\n", previous2);
    printf("%d\n", previous1);
    for(int fibo = 0; fibo < 18; fibo++)
    {
        newFibo = previous1 + previous2;
        printf("%d\n", newFibo);
        previous2 = previous1;
        previous1 = previous2;

    }
    return 0;


}