#include<stdio.h>
#include<string.h>
struct book

{
    int id;
    int price;
    char name[44];
};

struct book bb;
int main()
{
    bb.id = 45;
    bb.price = 80;
    strcpy(bb.name, "learn C");

    printf("%d\n",bb.id );
    printf("%d\n", bb.price);
    printf("%s\n", bb.name);
    return 0;




}
