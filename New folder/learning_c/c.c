#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr =fopen("value.txt","w");
    char studentname[30];
    fgets(studentname,30,fptr);
    printf("Enter your studentname");
    printf("%s",studentname);
    return 0;
}
