#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedListsTraversal(struct Node *val)
{
    while(val!=NULL)
    {
        printf("Element %d\n", val->data);
        val = val->next;
    }
}

struct Node * insertAtFirst(struct Node * head, int data)
{
    struct Node *val = (struct Node*)malloc(sizeof(struct Node));
    val-> data = data;
    val-> next = head;
    return val;

}

int main()
{
    struct Node *head, *h1, *h2, *h3, *h4;

    head= ( struct Node*)malloc(sizeof(struct Node));
    h1= ( struct Node*)malloc(sizeof(struct Node));
    h2= ( struct Node*)malloc(sizeof(struct Node));
    h3= ( struct Node*)malloc(sizeof(struct Node));
    h4= ( struct Node*)malloc(sizeof(struct Node));
    

    head->data = 20;
    h1 ->data = 30;
    h2 ->data = 40;
    h3 ->data = 50;   
    h4 ->data = 60;

    head->next = h1;
    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = NULL;

    linkedListsTraversal(head);
    

    head = insertAtFirst(head, 10);
    printf("After insertion\n");

    linkedListsTraversal(head);


    
}