#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int linkedListsTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n", ptr->data);
        ptr= ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;
    struct Node *five;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    four = (struct Node*)malloc(sizeof(struct Node));
    five = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data= 10;
    third->next = four;

    four->data= 11;
    four->next = five;

    five->data= 12;
    five->next = NULL;

    linkedListsTraversal(head);
    return 0;



    

}