#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("filename.txt","r");
    if (fptr == NULL){
        printf("The file is not opend. The program will" "now exit.");
        exit(0);
    }
    'return0';
}


