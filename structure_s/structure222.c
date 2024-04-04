#include<stdio.h>
#include<string.h>
struct book

{
    int price;
    int pages;
    char name[30];

};

int main()

{
    struct book b1;
    b1.price  = 23;
    b1.pages = 35;
   strcpy (b1.name,  "learn C");
   struct book *b;
   b = &b1;
   printf("book price %d\n", b->price);
   printf("book pages %d\n", b->pages);
   printf("book name %s\n", b->name);
   return 0;


}
