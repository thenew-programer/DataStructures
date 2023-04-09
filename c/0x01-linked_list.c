#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
} Node;

Node * HEAD;
Node * TAIL;
void InsertAtBegin(int);
void InsertAtEnd(int);
void Print();
Node *endNode();
void freeNodes();

int main(void)
{
    InsertAtBegin(1);
    InsertAtBegin(2);
    InsertAtBegin(3);
    InsertAtBegin(4);
    InsertAtBegin(5);
    Print();
    freeNodes();
   return (0);
}

void InsertAtN(int x, int at)
{
    Node * temp;
    temp = (Node *) malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;

}
void InsertAtBegin(int x)
{
    Node * temp;
    temp = (Node *) malloc(sizeof(Node));
    temp->data = x;
    temp->next = HEAD;
    HEAD = temp;
}

Node *endNode()
{
    Node * tmp;
    tmp = HEAD;
    while(tmp != NULL)
    {
        tmp = tmp->next;
    }
    return tmp;
}

void Print()
{
    Node * temp;
    temp = HEAD;

    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    putchar(10);
}

void freeNodes()
{
    Node * tmp;
    tmp = HEAD;

    while (tmp != NULL)
    {
        free(tmp);
        tmp = tmp->next;
    }
    free(tmp);
}
