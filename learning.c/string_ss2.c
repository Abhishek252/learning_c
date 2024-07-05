#include<stdio.h>
#include<string.h>
int main()
{
    char line[100];
    int count =0, i=0;
    printf("Extra the line of text");
    gets(line);
    while(line[i]!='\0')
    {
        if(line[i] == 32)
        count ++;
        i++;

    }

    if(line[i] == '\0')
    count ++;
    printf("Number of words = %d ", count);
    return 0;
}