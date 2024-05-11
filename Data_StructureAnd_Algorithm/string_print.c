#include<stdio.h>
#include<string.h>

int main()
{
    char st1[] = "PHP";
    char st2[] = "JAVA";
  //  FILE *fp;
   // fp= fopen("php.txt", "r");
    
    strcat(st1, st2);

   printf("strcat(st1,st2)%s\n", st2);
    return 0; 

}