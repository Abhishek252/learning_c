#include<stdio.h>
#include<conio.h>
int main()
{
    int age[5] = {18, 19, 20, 21, 22};
    int *ptr;
    ptr= &age;

    printf("the age is %d\n",&age[0] );
    printf("the age is %p\n", &age[1]);
    ptr++;
    
    
    printf("the age ia %d\n", age[0]);
    return 0;
}