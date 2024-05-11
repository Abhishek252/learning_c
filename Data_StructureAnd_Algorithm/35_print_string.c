#include<stdio.h>
#include<string.h>
int main()
{
    char sub[10][15] = {

        "C Programming",
        "Python",
        "Java",
        "Javascript",
        "C",
        "C++",
        "C#",
        "PHP",
        "HTML",
        "DSA"
    };

    int i;
    int len = strlen(sub[0]);
    int p= 0;
    for(i=0; i<10; i++)
    {
        if(strlen (sub[i])>=i)
        len= strlen(sub[i]);
        p =i;

    }

    printf("language with longest name  :%s Length %d", sub[p],len);
    return 0;

}