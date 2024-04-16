#include<stdio.h>
#include<string.h>
struct documents
{

    char name[50];
    char address[50];
    int contacts;
    int id;
};

int main()
{

    struct documents d1, d2, d3, d4;

    printf("**********Welcome to telephone directory**********");
    printf("\n 1. Add contacts\n");
    printf("2. Show contacts\n");
    printf("3. Update contacts\n");
    printf("4. Delete contacts\n");
    printf("5. Exit\n");
    printf("Choose any one option :1\n");

    printf("Enter the contacts number :");
    scanf("%d", &d1.contacts );
    printf("Enter the name :");
    scanf("%s\n", d1.name);
    printf("Enter the address :");
    scanf("%s\n", d1.address);
    printf("\nContact added successfully.");


    printf("\nChoose any option :2");
    printf("\nContacts in the directory.");

    printf("\nEnter the name:");
    scanf("%s\n", d2.name);
    printf("\nEnter the address :");
    scanf("%s\n", d2.address);
    printf("\nEnter the id :");
    scanf("%d\n", &d2.id);
    printf("\nEnter the contact number :");
    scanf("%d\n", d2.contacts);

    printf("\nChoose any option:3");
    printf("\nEnter the contact number to update the exiting contact :");
    printf("\nEnter new name :");
    scanf("%s",d3.name );
    printf("\nEnter new contact number");
    scanf("%d", &d3.contacts);
    printf("\nEnter new address :");
    scanf("%s", d3.address);
    printf("Contact update successfully.");

    printf("\n Choose any option:4");
    printf( "\nEnter the contact number which you want to delete :");
    scanf("%d\n", &d4.contacts);
    printf("\nContact delete successfully.");

    printf("\nChoose any option : 5");
    printf("\nThank you! god bye...");




    return 0;

}
