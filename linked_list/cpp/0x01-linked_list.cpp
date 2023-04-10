#include "0x01-linked_list.h"
#include <iostream>

/**
 * All the definition of the methods of class will be here
 */

using namespace std;

List::List()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::Append(int value)
{
    nodePtr n = new Node;
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
}

void List::Insert(int value, int index)
{
    nodePtr n = new Node;
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
}

int List::get(int index, int fail)
{
    int value;
    curr = temp = head;
    for (int i = 0; (i < index - 1) && (curr != NULL); i++)
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


void List::Delete(int index)
{
    nodePtr delPtr = NULL;
    curr = head;
    for (int i = 0; (i < index) && (curr != NULL); i++)
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "Error: index out of bounds, node not found.\n";
        delete delPtr;
    }
    else
    {
        delPtr = curr;
        temp->next = curr->next;
        delete delPtr;
        cout << "Node at index "<< index << " deleted Successfully.\n";
    }
}

void List::DeleteValue(int value)
{
    nodePtr delPtr = NULL;
    curr = head;
    while (curr != NULL && curr->data != value)
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << value << " was not here.\n";
        delete delPtr;
    }
    else
    {
        delPtr = curr;
        temp->next = curr->next;
        delete delPtr;
        cout << value << " Successfully deleted\n";
    }
}

void List::Print()
{
    curr = head;
    cout << "[ ";
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << "]\n";
}


