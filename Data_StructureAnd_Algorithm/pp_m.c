#include <stdio.h>
#include<stdlib.h>
int parentheses_Matching( char *arr) {
    int balance = 0;
     
     
     //for(int i=0; arr[i]!='\0'; i++ ){
     while (*arr!= '\0') {
        if (*arr == '{' || *arr =='(' || *arr == '{')
            balance++;
        else if (*arr == '}'||*arr == '}' || *arr == ')')
            balance--;

        if (balance < 0) 
            return 0;

        arr++;
    }

    return balance == 0; 
}


int main() {
    char *arr = "{({})}";

    if (parentheses_Matching(arr))

        printf("it's matching.\n");
    else
        printf("it's not matching.\n");

    return 0;
}