#include<stdio.h>
int main()
{
    int number = 5;
    int *p;
    p= &number;
    
    

    printf("Address of number = %u\n", p);
    printf("value of number =%u\n", *p);
    
    return 0;

}