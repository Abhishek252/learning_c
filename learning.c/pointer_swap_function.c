#include<stdio.h>
void swap(int a, int b);

int main()
{
    int x = 5, y = 3;
    swap(x,y);
    printf("  x = %d & y = %d\n", x,y);





    return 0;
}

void swap(int a, int b)
{
    int t;
    t = a;
    a= b;
    b = t;

    printf("swap value x= %d & y=%d\n", a,b);

}



