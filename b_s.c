#include<stdio.h>
#include<string.h>
int main()

{

    struct book{


          int id;
          int pages;
          char name[30];

    };

    struct book b1;
    b1.id = 12;
    b1.pages = 200;
   strcpy (b1.name, "math");

   printf("book id :%d\n", b1.id);
   printf("book pages : %d\n", b1.pages);
   printf("book name : %s\n", b1.name);
   return 0;
}
