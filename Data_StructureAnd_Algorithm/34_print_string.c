#include<stdio.h>
int main()
{
    char *subject[10] = {

        "C Programming",
        "Python",
        "javascript",
       "Java",
       "PHP",
       "C#",
       "C",
       "C++",
       "DSA",
       "HTML"

    };

    int i;
    for(i =0; i<10; i++)
    {
        printf("%s\n", subject[i]);
    }
    return 0;
}