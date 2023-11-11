#include<stdio.h>
int main()
{
    char a[30];
    int i;
    i=0;
    printf("Enter a name\n");
    scanf("%s",&a[i]);
    while(a[i]!='\0')
        printf("%s\n",a[i]);
        i++;
    return 0;


}
