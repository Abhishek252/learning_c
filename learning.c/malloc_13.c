#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 5;
    int *p;
    p= (int *)malloc(5*sizeof(int));
    for(int i=0; i<=4; i++)
    {
        scanf("%d\n", &p[i]);

    }
    for(int i=0; i<=4; i++)
    {
        printf("the value of array %d\n", i,*p);
    }
    return 0;
}