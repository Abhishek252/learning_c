#include<stdio.h>
#include<conio.h>
void  main()
{
    int a=5;
    float b=4.0 , *fp=&b;
    void *vp;
    vp=&b;
    printf("a=%f\n",*(float*)vp);
    return 0;
}
