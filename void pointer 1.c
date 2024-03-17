#include<stdio.h>
void main()
{
    int a=5;
    void *vp;
    vp=&a;
    printf("a=%d\n",*(int*)vp);


}
