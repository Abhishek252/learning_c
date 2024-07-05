#include<stdio.h>
#include<string.h>

int main()
{
    char name1[10]= "himanshi";
    char name2[7] = "ritika";
    char name3[5] = "hi";

    printf("%d\n", strcmp(name1,name2));
    printf("  %d", strcmp(name1,name3));
    return 0;
}
 