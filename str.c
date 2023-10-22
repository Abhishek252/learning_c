#include<stdio.h>
int main()
{
    char a[50];
    int i;
    printf("Enter your name\n");
    fgets(a,50,stdin);
    printf("%s\n",a);
    return 0;
}
