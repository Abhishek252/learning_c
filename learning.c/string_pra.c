#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    printf("Enter data");
    scanf("%s", ch);
    int l = strlen(ch);
    printf("the length is %s\n", strlen(ch));
    return 0;

}