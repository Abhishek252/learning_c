#include<stdio.h>
#include<string.h>
struct book
{
    char title[20];
    char author[15];
    int pages;
    float price;

};

int main()
{
    struct book b1;
    b1.pages =280;
    b1.price = 7.8;
    strcpy(b1.title, "basic");
    strcpy(b1.author, "Balangurusamy");

    printf("%d\n", b1.pages);
    printf("%f\n", b1.price);
    printf("%s\n", b1.title);
    printf("%s\n", b1.author);
    return 0;
}