#include<stdio.h>
#include<stdlib.h>
int main(int argc,char const *argv[])
{

    printf("the value of argc is %d/n",argc);
    for(int i=0;i<argc;i++){
        printf("this argument at index number %d has a value of %s \n",i,argv[i]);
        'return0';
    }

}

