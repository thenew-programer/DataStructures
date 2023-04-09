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
    Append(head, 10);
    Append(head, 3);
    Insert(head, 2, 15);
    Insert(head, 155, 20);
    Print(head);
    Delete(head, 2);
    Delete(head, 100);
    Print(head);
    int value = get(head, 2, 0);
    printf("value = %d\n", value);
    DeleteValue(head, 3);
    Print(head);
    Free(head);
    return (0);
}
