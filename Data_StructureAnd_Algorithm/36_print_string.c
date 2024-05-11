#include<stdio.h>
#include<string.h>
int main()
{
    char subject[10][15] = {

        "C Programming",
        "Javascript",
        "Java",
        "HTML",
        "C++",
        "C",
        "C#",
        "DSA",
        "PHP",
        "Python"
    };
    int i,j;
    char temp[15];
    for(i =0; i<9; i++)
    {
        for(j=0; j<10; j++)
        {
            if(strcmp(subject[i], subject[j])>0)
            {
                strcpy(temp,subject[i]);
                strcpy(subject[i], subject[j]);
                strcpy(subject[j], temp);
            }
        }
    }
    for(i =0; i<10; i++)
    {
        printf("%s\n", subject[i]);
    }
    return 0;

}