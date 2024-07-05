#include<stdio.h>
#include<string.h>
int main()
{
    char s1[18], s2[10];
    int n;
    printf("Enter two string\n");
    scanf("%S%s", &s1,&s2);
    strcat(s2,s2);
    printf("\n string built by strcat is = %s",s1 );
    printf("\n Length of the string built by strcat is = %d",s1 );

    strncat (s1,s2,5);
    printf("\n strint built by strncat using 5 character is %s\n", s1);
    
    return 0;

}