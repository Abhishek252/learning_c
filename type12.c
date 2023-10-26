#include<stdio.h>
#include<string.h>

typedef struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

int main()
{
    Book book;
    strcpy(book.title, "C programming");
    strcpy(book.author, "Dennis Ritchi");
    strcpy(book.subject,"C programming Tutorial");
    book.book_id = 6547810;

    printf("Book title: %d\n", book.title);
    printf("Book author: %s\n", book.author);
    printf("Book subject: %s\n", book.subject );
    printf("Book book_id: %d\n", book.book_id);
    return 0;

}


