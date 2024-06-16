#include<stdio.h>
#include<string.h>

typedef struct book
{
    int id;
    int price;
    char name[45];
} b;

int main()
{
    b b1  ;
    b1.id=  56;
    b1.price  = 67;
    strcpy(b1.name, "hindi");

    printf("%d\n", b1.id);
    printf("%d\n", b1.price);
    printf("%s\n", b1.name);
    
}