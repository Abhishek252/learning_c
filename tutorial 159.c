#include<stdio.h>
int main()
{
    char Countryname[30];
    printf("Enter Countryname");
    fgets(Countryname, 30, stdin);
    printf("%d",Countryname);
    return 0;
}
