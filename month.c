#include<stdio.h>
int main()
{
    char monthName[60];
    printf("Enter your monthName\n");
    fgets(monthName,60,stdin);
    printf("%s\n",monthName);
    return 0;
}
