#include<stdio.h>
struct Books
{
    int bookId;
    int  bookPrice;
    int  bookPages;
};

int main()
{
    struct Books b1;
    b1. bookId = 82;
    b1. bookPrice = 200;
    b1. bookPages = 325;

    printf("bookid is %d\n", b1.bookId);
    printf("bookPrice is %d\n", b1.bookPrice);
    printf("bookPages is %d\n", b1.bookPages);
    return 0;
}
