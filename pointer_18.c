#include<stdio.h>
int main()
{
    int Age[5]={23, 24, 25, 26,27};
    int* ptr= &Age;
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",&Age[i]);

    }
    return 0;
}
