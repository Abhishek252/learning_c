#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fptr;
    fptr=fopen("file.txt","w");
    if(fptr==NULL){
        printf("the file is notopend.the program will" "exit now");
        exit(0);
    }
    else{
        printf("the file is created successfully.");

    }
    'return0';
}
