#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d", &age);
    (age>=18) ? printf("they can vote"): printf("they can not vote");
    return 0;
}