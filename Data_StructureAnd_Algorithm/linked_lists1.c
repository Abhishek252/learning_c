#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;

};

int main()
{
    struct Node *head, *n2, *n3, *n4, *n5;
    head = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc (sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));
    n4 = (struct Node *)malloc(sizeof(struct Node));
    n5 = (struct Node*)malloc(sizeof(struct Node));

    head->data = 20;     
    n2->data = 40;
    n3->data = 60;
    n4->data = 80;
    n5->data = 100;


  head->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n5;
  n5->next = NULL;

  struct Node *val = head;
  while(val != NULL)
  {

    printf("%d\n", val->data);
    val = val -> next;
    return 0;

  } 









    

}