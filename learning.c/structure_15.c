#include<stdio.h>
#include<string.h>

struct book
{
    int id;
    int price;
    char name[30];
    char author[40];

};

int main()
{
    struct book b1;
    struct book  *ptr = &b1;

    ptr->id = 12;

    ptr->price = 89;
    strcpy(ptr->name, "manshi");
    strcpy(ptr->author, "Dennis Ritchei");

    printf("Book Id =%d\n", ptr->id);
    printf("Book Price =%d\n", ptr->price);
    printf("Book Name =%s\n", ptr->name);
    printf("Book Author =%s\n", ptr->author);

    return 0;


}