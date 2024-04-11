#include<stdio.h>

int main()
{
    int age , x;
    printf("enter age");
    scanf("%d", &age);

    if(age>=18){

        printf("adult\n");
        if(x % 2 == 0){

           printf("The given number is even");
        }else{

            printf("The given number is odd");
        }
    }else{

        printf("not adult");
    }
    return 0;
}