#include<stdio.h>
int main()
{
    int ages[4]= { 25,50,75,100};
    int *ptr= ages;
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    return 0;
}
