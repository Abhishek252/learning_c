#include<stdio.h>
int main()
{
    int myAge = 43;
    int* ptr= &myAge;
    printf("%d\n",myAge);
    printf("%d\n",&myAge);
    printf("%d\n",ptr);
    return 0;
}
