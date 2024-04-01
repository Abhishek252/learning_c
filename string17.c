#include<stdio.h>
#include<string.h>

struct book
{
    char title[40];
    int pages;
    double price;

};

int main()
{
    struct book b1 = {"Learn C" , 32.5, 50};
    struct book *strptr;
    strptr = &b1;
    printf("Title %s\n ", strptr->title);
    printf("No of pages %d\n", strptr->pages);
    printf("Price %.1lf\n", strptr->price);
    return 0;

}
