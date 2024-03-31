#include<stdio.h>
struct Book
{
    int bookId;
    int bookPrice;
    char bookName[50];
    char bookAuthor[50];


};

int main()
{
    struct Book b1;
    b1. bookId = 26;
    b1. bookPrice = 200;
   strcpy( b1.bookName, "Hindi");
   strcpy(b1.bookAuthor, "Rajiv");
   printf("bookid is %d\n", b1.bookId);
   printf("bookprice is %d\n", b1.bookPrice);
   printf("bookname is %s\n", b1.bookName);
   printf("bookauthor is %s\n", b1.bookAuthor);
   return 0;


}
