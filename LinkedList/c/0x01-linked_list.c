#include "0x01-linked_list.h"
#include <stdio.h>
#include <stdlib.h>


Node * Append(Node * head, int value)
{
    Node * n = (Node *) malloc(sizeof(Node));
    Node * curr;
    n->next = NULL;
    n->data = value;
    if (head != NULL)
    {
        curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = n;
    }
    else
    {
        head = n;
    }
    return (head);
}

Node * Insert(Node * head, int index, int value)
{
    Node * n = (Node *) malloc(sizeof(Node));
    Node * curr;
    Node * temp;
    n->next = NULL;
    n->data = value;
    if (index == 0)
    {
        temp = head->next;
        head = n;
        n->next = temp;
    }
    else
    {
        curr = head;
        for (int i = 0; (i < index - 1) && (curr->next != NULL); i++)
        {
            curr = curr->next;
        }
        if (curr->next == NULL)
        {
            curr->next = n;
        }
        else
        {
            temp = curr;
            curr = curr->next;
            temp->next = n;
            n->next = curr;
        }
    }
    return (head);
}


int get(Node * head, int index, int fail)
{
    int value;
    Node * curr = head;
    Node * temp = head;
    for (int i = 0; (i <= index) && (curr != NULL); i++)
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        return fail;
    }
    else
    {
        value = temp->data;
        return value;
    }
}

void Delete(Node * head, int index)
{
    Node * del = NULL;
    Node * curr = head;
    Node * temp = head;
    for (int i = 0; (i < index) && (curr != NULL); i++)
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        printf("Error: index out of bounds, node not found.\n");
    }
    else
    {
        del = curr;
        temp->next = curr->next;
        free(del);
        printf("Node at index %d deleted successfully.\n", index);
    }
}


void DeleteValue(Node * head, int value)
{
    Node * del = NULL;
    Node * curr = head;
    Node * temp = head;
    while (curr != NULL && curr->data != value)
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        printf("Node not found.\n");
    }
    else
    {
        del = curr;
        temp->next = curr->next;
        free(del);
        printf("Node successfully deleted.\n");
    }
}

void Print(Node * head)
{
    Node * curr = head;
    printf("[  ");
    while (curr != NULL)
    {
        printf("%d  ", curr->data);
        curr = curr->next;
    }
    printf("]\n");
}


void Free(Node * head)
{
    Node * temp = NULL;
    while (head != NULL)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
