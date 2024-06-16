#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=4;
    int *p;
    p = (int *) malloc (4* sizeof(int));
    for(int i=0; i<=3; i++)
    {
        printf("%d\n", i);
        scanf("%d", &p[i]);
    }

    return 0;
}