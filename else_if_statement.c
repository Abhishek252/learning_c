#include<stdio.h>
int main(){

    int marks;
    printf("enter marks");
    scanf("%d", &marks);

    if(marks<=30){

        printf("fall");

    }else if(marks>=79 && marks<=100){

        printf("pass");

    }else {

        printf("wrong marks");
    }
    return 0;

}