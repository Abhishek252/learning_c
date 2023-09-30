#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]= "Hello!";
    char str2[]= "World!";

    //concatenate str2 to str1(the result is stored in str1)
    strcat (str1, str2);

    //print str1
    printf("%s",str1);
    'return0';
}
