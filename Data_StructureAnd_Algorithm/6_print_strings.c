#include<stdio.h>
int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int length = sizeof(alphabet)/ sizeof(alphabet[0]);
    printf("the length is %d\n", length);
    printf("the size is %d\n", sizeof(alphabet));
    return 0;

}