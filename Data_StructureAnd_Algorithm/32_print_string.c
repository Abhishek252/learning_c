#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[12] = " Hello";
    char str2[12] = "world";
    char str3[12] ;
    int len;
    strcpy( str3,str1);
    printf("strcpy(str3,str1)%s\n", str3);

    // concatenate
    strcat(str1,str2);
    printf("strcat(str1,str2)%s\n", str1);
    
    //strlen
    len = strlen(str1);
    printf("strlen(str1)%d\n", len);

    //strcmp
    strcmp(str1,str2);
    printf("strcmp(str1,str2)%s\n", str2);
    


    return 0;


}