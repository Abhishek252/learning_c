#include<stdio.h>
int main()
{
    char a[60];
    printf("Enter city name\n");
    fgets(a,60,stdin);
    printf("%s",a);
    return 0;
}
