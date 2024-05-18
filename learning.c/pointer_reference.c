#include<stdio.h>
void swap(int *x, int *y);

int main()
{
    int a = 5, b = 3;
    swap(&a,&b);
    printf("a = %d & b = %d\n", a,b);
    return 0;
}

void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("swap value x = %d & y = %d\n" , *x, *y);

}