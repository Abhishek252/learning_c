#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25], s2[30];
    printf("**** Comparision between two string usin strcmp\n****");
    printf("Enter the first string\n");
    scanf("%s", s1);
    printf("Enter the second string\n");
    scanf("%s", s2);

    printf("**After comparision\n**");

    if(strcmp(s1,s2)==0)
    {  
        printf("\n\n [< --- %s== %s ---> equal string ]", s1,s2);
        

    }

    else{
        printf("\n\n [< --- %s== %s ---> different  string ]", s1,s2);

        
    }
    return 0;
}