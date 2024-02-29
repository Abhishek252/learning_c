#include<stdio.h>
#include<conio.h>
int main()
{
    int array[]={90,80,70,60,50};
    int length=sizeof(array)/ sizeof(array[0]);
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
