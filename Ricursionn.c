#include<stdio.h>

int fiboncci(int i)
{
    if(i == 0){
        return 0;
    }
    if(i == i){
        return 1;
    }
    return fiboncci(i-1) + fibnocci(i-2);

}
int main()
{
    int i;
    for( i=0; i<10; i++)
    {
        printf("%d\t\n",fibnocci(i));
    }
    return 0;

}

