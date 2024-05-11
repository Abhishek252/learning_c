#include<stdio.h>
int main()
{
    char subject[10][15] = {
          

      "C Programming",
      "Python",
      "HTML",
      "Javascript",
      "Java",
      "PHP",
      "C#",
      "C++",
      "C",
      "DSA",

    };
    int i;
    for(i=0; i<10; i++)
    {
        printf("%s\n", subject[i]);
    }
    return 0;
}