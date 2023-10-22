#include<stdio.h>
int main()
{
    char weekName[60];
    printf("Enter your weekName\n");
    fgets(weekName,60,stdin);
    printf("%s\n",weekName);
    return 0;
}
