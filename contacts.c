#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_CONTACTS 100
struct Contact
{
    char name[50];
    char number[20];
    char address[30];
    int id;

};

struct Contact contacts[MAX_CONTACTS];

int numContacts = 0;

void add_contacts();
void show_contacts();
void update_contacts();
void delete_contacts();

int main()
{
    int choice;
    while(1)
    {
        printf("**********Welcome to Telephone directory***********");

        printf("\n Menu:\n");
        printf("1. Add contact\n");
        printf("2. Show contact\n");
        printf("3. Update contact\n");
        printf("4. Delete contact\n");
        printf("5. Exit\n");

        printf("Enter your choice :\n");
        scanf("%d",&choice );
        switch(choice)
        {

        case 1:
            add_contact();
            break;
        case 2:
            show_contact();
            break;
        case 3:
            update_contact();
            break;
        case 4:
            delete_contact();
            break;
        case 5:
            printf("Thank you ! good bye...\n");
            return 0;
        default:
            printf("Invalid choice :Please enter a number from 1 to 5\n.");
        }
    }
    return 0;

}
void add_contact()
{
    if(numContacts>= MAX_CONTACTS){
        printf("Cannot and more contacts. Cannot list fill.\n");
        return;

}
printf("Enter contact name:");
scanf("%s", contacts[numContacts].name);
printf("Enter contact number:\n");
scanf("%s\n", contacts[numContacts].number);
printf("Enter contact address:\n");
scanf("%s\n", contacts[numContacts].address);
numContacts++;
printf("Contact added successfully!\n");

}
void show_contact()
{

    if(numContacts == 0)
    {

        printf("No contacts found .\n");
        return;
    }
    printf("Contacts:\n");
    for(int i =0 ; i < numContacts ; i++)
    {
        printf("%s: %s\n", contacts[i].name , contacts[i].number);

    }
}
void update_contact()
{
    char name[50];
    printf("Enter the name of the contacts to update:");
    scanf("%s", name);
    for(int i =0 ; i<numContacts; i++)
    {
        if(strcmp(contacts[i].name, name) == 0);
        {

            printf("Enter the new name:");
            scanf("%s", contacts[i]. name);
            printf("Enter the new number:");
            scanf("%s", contacts[i].number);
            printf("Enter the new address:");
            scanf("%s", contacts[i].address);
            printf("Enter the id :");
            scanf("%d", contacts[i].id);
            printf("Contact updated successfully!\n");
            return;

        }
    }
   // printf("Contact not found.\n");

}
void delete_contact()
{
    char name[50];
    printf("Enter the name of the contact to delete:");
    scanf("%s", name);
    for(int i =0 ;i<numContacts; i++)
    {
        if(strcmp(contacts[i].name, name)== 0);
        {
            for(int j = i; j< numContacts-1; j++)
            {
                strcpy(contacts[j].name, contacts[j+1].name);
                strcpy(contacts[j].number, contacts[j+1].number);
                strcpy(contacts[j].address, contacts[j+1].address);
                strcpy(contacts[j].id, contacts[j+1].id);


            }
            numContacts--;
            printf("Contacts deleted successfully!\n");
            return;
        }
    }
    printf("Thank you ! good bye...");
}
