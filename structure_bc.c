#include<stdio.h>
#include<string.h>

struct Bankaccount
{

    char name[50];
    char address[50];
    int num;

};

int main()
{
    struct Bankaccount b1;
    strcpy(b1.name, "Union Bank");
    strcpy(b1.address, "Behada");
    b1.num = 23;

    printf("Bankaccount name is : %s\n",b1.name);
    printf("Bankaccount address is : %s\n", b1.address);
    printf("Bankaccount num is : %d\n", b1.num);
    return 0;
}
