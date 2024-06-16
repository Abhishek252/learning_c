#include<stdio.h>
#include<string.h>
union book
{
    int id;
    int price;
    char name[100];
};

int main()
{
    union book b1;
    b1.id = 12;
    b1.price = 89;
   strcpy(b1.name, "math");

   printf("student id = %d\n ", b1.id);
   printf("student id = %d\n ", b1.price);
   printf("student id = %s\n ", b1.name);

   return 0;


}