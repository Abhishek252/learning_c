#include<stdio.h>
#include<string.h>



struct documents
{

    char name[50];
    char address[50];
    int  contacts;
    int id;


};
int main()
{

    struct documents d1, d2, d3, d4;

    //strcpy(d1.name, "Mansi Mishra");
    //strcpy(d1.address, "Gopalpur");
   // d1.contacts = 8604708489;
    printf("***********Welcome to telephone directory*************");
    printf("\n1. Add contacts\n");
    printf("2.Show contacts\n");
    printf("3.Updates contacts\n");
    printf("4.Delete contacts\n");
    printf("5.Exit\n");
    printf("Choose any one option :1\n");
    
    printf("Enter the contacts number: ");
    scanf("%d", &d1.contacts);
    printf("Enter  the name :");
    scanf("%s\n", d1.name);
    printf("Enter the address :");
    scanf("%s\n", d1.address);
    printf("\ncontact added successfully.");

    printf("\nChoose any option :2");
    printf("\nContacts in the directory :");

    printf("\nEnter the address :");
    scanf("%s\n", d2.address);
    printf("\nEnter the name :");
    scanf("%s\n", d2.name);
    printf("\nEnter the contacts :");
    scanf("%d", &d2.contacts);
    printf("Enter the id :\n");
    scanf("%d", &d2.id);

    

  
   // printf("\nEnter address :");
   // scanf("%s", "address");


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    return 0;
}




