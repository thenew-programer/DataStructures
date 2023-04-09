#include "0x01-linked_list.h"
#include <cstdlib>
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

void List::Append(int Indata)
{
    nodePtr n = new Node;
    n->next = NULL;
    n->data = Indata;
    if (head != NULL)
    {
        curr = head;
        while (curr != NULL)
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

void List::Delete(int Deldata)
{
    nodePtr delPtr = NULL;
    curr = head;
    while (curr != NULL && curr->data != Deldata)
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << Deldata << " was not here.\n";
        delete delPtr;
    }
    else
    {
        delPtr = curr;
        temp->next = curr->next;
        delete delPtr;
        cout << Deldata << " Successfully deleted\n";
    }
}

void List::Print()
{
    temp = head;
    cout << "[ ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "]\n";
}



/************ Delete
 * 1- search for the element
 *    if the element isn't there exit and print "the element isn't there"
 *    if the element is there 
 *       put the addr of the next element in the element before the one we delete
 *       delete the actual node


























