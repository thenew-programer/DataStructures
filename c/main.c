#include "0x01-linked_list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A simple test of the linked list
 * Return: 0
 */

int main()
{
    Node * head;
    Node * list = (Node *) malloc(sizeof(Node));
    list->data = 1;
    list->next = NULL;
    head = list;
    head = Append(head, 10);
    head = Append(head, 30);
    head = Insert(head, 0, 1);
    Print(head);
    Delete(head, 1);
    Print(head);
    Free(head);
    return (0);
}
