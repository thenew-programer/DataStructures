#include "2-stack_ll.h"
#include <iostream>

Stack_ll::Stack_ll() {
    // Initialize the top pointer
    top = NULL;
}

void Stack_ll::Push(int element) {
    // alloc memory for the node 
    nodePtr temp = new Node();
    temp->data = element;
    temp->next = top;
    top = temp;
}

void Stack_ll::Pop() {
    nodePtr temp;
    if (top == NULL) return;
    temp = top;
    top = top->next;
    delete temp;
}

int Stack_ll::Top() {
    return (top->data);
}

// Destructor 
Stack_ll::~Stack_ll() {
    nodePtr temp;
    // loop over all the list and free the alloc memory
    while (top != NULL) {
        // just to prevent double free
        temp = top;
        top = top->next;
        delete temp;
    }
}
