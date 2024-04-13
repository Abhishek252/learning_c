#include<stdio.h>
int main()
{
    int age;
    printf("Enter age");
    scanf("%d", &age);
    if(age>= 18)
    {
        printf("adult\n");
        printf("they can vote\n");
        printf("they can drive\n");
    }
    else{

        printf("chiled\n");
       // printf("thank you");

    }
    printf("Thank you");
    return 0;
}