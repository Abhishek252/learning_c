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
    struct book b1 = { 200, 300, "physics"};
   struct book *b;
   b = &b1;
   printf("book price %d\n", b->price);
   printf("book pages %d\n", b->pages);
   printf("book name %s\n", b->name);
   return 0;


}
