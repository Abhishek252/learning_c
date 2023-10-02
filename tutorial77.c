#include<stdio.h>
int main()
{
    int myNumbers[4]= {25,50,75,100};
    int *ptr = myNumbers;
    int i;

    for (i=0; i<4; i++)
    {
        printf("%d\n", *(ptr + i));

    }
    'return0';
}
