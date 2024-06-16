#include<stdio.h>
#include<string.h>
int main()
{
    char arr[5][10] = {"himanshi" , "ritika", "mahi", "niyati", "laduu" };
    int i ;
    for(i=0; i<5; i++)
    {
        printf("string = %s\n", arr[i]);
    }
    return 0;
}