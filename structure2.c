#include<stdio.h>
int main()
{
    char s1[20];
    char s2[20];
    char s3[30]= "is a friend of";
    printf("Enter the name of first friend\n");
    gets(s1);
    printf("Enter the nane of second friend\n");
    gets(s2);

    puts (strcat(s1,(strcat (s3, s2))));
    'return0';

}
