#include<stdio.h>
int main()
{
    int x[5] ={25,50,75,100,125};
    int i;
    for (i=0; i<5; i++)
    {
        printf("%p\n",&x[i]);
    }
    return 0;

}
