#include<stdio.h>
int main()
{
    int mynumbers[4] = {25,50,75,100};
    int i;
    for(i=0; i<4; i++)
    {
        printf("%p\n",&mynumbers[i]);

    }
    return 0;
}
