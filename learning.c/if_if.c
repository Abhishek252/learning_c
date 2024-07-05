#include<stdio.h>
int main()
{
    int x ;
    printf("Enter numbers");
    scanf("%d", &x);
    if(x%7 == 0 || x%3 ==0){
        printf("divisible");
    }
    else{
        printf("Not divisible");
    }
    return 0;
}