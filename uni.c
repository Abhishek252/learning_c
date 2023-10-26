#include<stdio.h>
#include<string.h>
union Book
{
    int Book_Id;
    int Book_price;
    char Book_name[30];

};
int main()
{
    union Book b1;
    b1.Book_Id =23 ;
    b1.Book_price =350 ;
    strcpy(b1.Book_name,"C programming" );
    printf("b1 book_id: %d\n",b1.Book_Id);
    printf("b1 book_price: %d\n",b1.Book_price);
    printf("b1 book_name: %s\n",b1.Book_name);
    return 0;
}
