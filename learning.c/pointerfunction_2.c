#include<stdio.h>
int *larger(int*x, int *y);
void main()
{
    int a,b;
    int *p;
    printf("enter the value of a and b\n");
    sanf("%d%d", &a,&b);
    printf("largest = %d\n", p);

}
int *larger(int *x, int *y)
{
    return (*x>*y?*x:*y);
}