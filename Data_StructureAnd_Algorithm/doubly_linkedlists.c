#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct node *previous;
    struct node *next;

};

int main()
{
    struct Node *n1, *n2, *n3, *n4, *n5;
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));
    n4 = (struct Node *)malloc(sizeof(struct Node));
    n5 = (struct Node *)malloc(sizeof(struct Node));

    n1-> data = 23;
    n2 -> data = 34 ;
    n3 -> data = 36;
    n4 -> data = 52;
   // n5 -> data = 50;

    n1-> next = n2;
    n1->previous = NULL;

    n2->next = n3;
    n2 -> previous = n1;

    n3-> next = n4;
    n3->previous = n2;

    n4 -> next = NULL;
    n4 -> previous = n3;

  //  n5 -> next = NULL;
   // n5 -> previous = n4;

    struct Node *val = n1;
    while(n1 != NULL)
    {
        printf ("%d\n", val -> data);
        val = val -> next;

    }

    return 0;
    
}