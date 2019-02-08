#include<stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main(void)
{
   printf("Hello\n");
   struct Node* head = NULL;
   struct Node* second = NULL;
   struct Node* third = NULL;

   head = (struct Node*)malloc(sizeof(struct Node));
   second = (struct Node*)malloc(sizeof(struct Node));
   third = (struct Node*)malloc(sizeof(struct Node));

   head->data = 5;
   head->next = second;
   second->data = 7;
   second->next = third;
   third->next = NULL;
   third->data = 9
}

void addNode(intdata, struct Node* head)
{
  struct Node* trav = head;

  while(trav->next != NULL)
  {
      trav = trav->next;
  }

    trav->next = (struct Node*)malloc(sizeof(struct Node))
    trav->next->data = data
    trav->next->next = NULL;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    trav->next = newNode;
}

int pop(struct Node* head)
{
    head->next = 5;
    head->next->next = NULL;
}
{

}