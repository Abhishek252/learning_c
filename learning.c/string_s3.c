#include<stdio.h>
int main()
{
    char mystate[30];
    printf("Enter my state name:");
    fgets(mystate, "%s", stdin);
    printf("my state name is = %s\n", mystate);
    return 0;
}
