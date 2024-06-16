#include<stdio.h>
int main()
{
    FILE  *ptr;
    ptr = fopen("sum.txt", "r");

    int a;
    fscanf(ptr, "%d", &a);
    int b;
    fscanf(ptr, "%d", &b);
    fclose(ptr);

    ptr = fopen("sum.txt", "w");
    
    fprintf( ptr , "%d\n", a+b);
    fclose(ptr );

    return 0;
    

}