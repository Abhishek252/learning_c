#include<stdio.h>
#include<string.h>
int main()
{
   char name1[] = "COMPUTER";
   char name2[20] ;
   strcpy(name2, name1);
   printf("strcpy is = %s\n", strcpy(name2,name1));
   return 0;

}