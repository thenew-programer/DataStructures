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
    head = Append(head, 40);
    head = Append(head, 38);
    head = Append(head, 90);
    head = Append(head, -1);
    head = Insert(head, 0, 1);
    printf("value at index 5 = %d\n", get(head, 5, 100));
    Print(head);
    Delete(head, 1);
    Print(head);
    Free(head);
    return (0);
}
