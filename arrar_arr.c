#include<stdio.h>
#include<string.h>

union book{

    int id;
    float price;
    char name[30];

};

int main()
{
    union book b1;

   // printf("Enter id");
   // scanf("%d", &b1.id);
   // printf("Enter code");
   // scanf("%f", &b1.price);
   // printf("Enter name");
   // scanf("%s", b1.name);



    b1.id = 1;
    b1.price = 120.23;
    strcpy(b1.name, "math");

    printf("id is %d\n", b1.id);
    printf("price is %.1f\n", b1.price);
   printf("name is %s\n", b1.name );

    return 0;
}