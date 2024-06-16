#include<stdio.h>
struct product
{
    int stock;
    float price, discount;
    char name[20];
};

int main()
{
    struct product p[3];
    int i;
    float temp;
    for(i=0; i<=3; i++)
    {
        printf("Enter product name");

        printf("enter stock:\n");
        scanf("%d", p[i].stock);
        printf("Enter price\n");
        scanf("%f", &temp);
        printf("Enter discount\n");
        scanf("%f", &temp);
        p[i].discount = temp;

        printf("Enter name\n");
        scanf("%s", p[i].name);
        printf("\n\n");
        fflush(stdin);
        

    }

    for(i=0;i<=3; i++)
    {
        printf("stock = %d\n", p[i].stock);
        printf("price = %2.f\n", p[i].price);
        printf("stock = %2.f\n", p[i].discount);
        printf("stock = %s\n", p[i].name);
    }
    return 0;
}