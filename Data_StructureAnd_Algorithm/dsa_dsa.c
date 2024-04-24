#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;


};

int main()
{    
    //struct Node 
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node *fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 7;
    head->next = second;

    second->data= 11;
    second->data =third;

    third->next = 12;
    third->data = fourth;
   

   fourth->next = 66;
   fourth->data = NULL;


  
    
}