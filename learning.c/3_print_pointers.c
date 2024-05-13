#include<stdio.h>
int main()
{
    int a[4] = {25, 50, 100, 75};
    int *p= &a;
    for(int i=0; i<4; i++)
    {
        printf("%d\n", a[i]);

        printf("%d\n", &a[i]);
        
    }
    return 0;

}