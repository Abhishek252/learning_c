#include<stdio.h>
int main()
{
    int myNumbers[4]= {25,50,75,100};
    *myNumbers= 13;

    *(myNumbers +1)= 17;
    printf("%d\n",*myNumbers);
    printf("%d\n",*(myNumbers + 1));
    'return0';

}
