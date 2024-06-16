#include<stdio.h>
#include<string.h>

struct product
{
    char name[30];
    int stock;
    float price, discount;

};

void main()
{
    struct product p[3];
    int i;
    int temp;

    for(int i=0; i<3; i++)
    {
        printf("Enter product name\n");
        scanf("%d\n", p[i].name);
        printf("Enter stock\n");
        scanf("%d\n", p[i].stock);
        printf("Enter price\n");
        scanf("%f\n", &temp);
        p[i].price = temp;

        printf("Enter discount\n");
        scanf("%f", &temp);
        p[i].discount=temp;
        print("\n\n");
        fflush(stdin);


    }

    for(i=0; i<3; i++)
    {
     
        printf("Name=%s, stock=%d,  price=$%.2f, discount=%.2f%.\n", p[i].name,p[i].stock, p[i].price, p[i].discount);

        return 0;
    }


        
}