#include "1-stack_array.h"
#include <iostream>

Stack::Stack() {
    // reserve some memory in the heap for the arr
    stack_Array.data = new int[MAX_SIZE];
    // initialize top var, -1 means the arr is empty
    stack_Array.top = -1;
}


void Stack::Push(int element) {
    // Check whether the arr is full
    if (stack_Array.top == MAX_SIZE - 1) {
        std::cout << "Error: stack overflow.\n";
        return; }
    // Add the element in the arr
    stack_Array.data[++stack_Array.top] = element; }


void Stack::Pop() {
    // Checks if the arr is empty 
    if (stack_Array.top == -1) {
        std::cout << "Error: No element to pop.\n";
        return; }
    // decrement top 
    stack_Array.top--; }


int Stack::Top() {
    // return the element on the top of the stack
    return (stack_Array.data[stack_Array.top]); }


bool Stack::isEmpty() {
    // return true is the arr is empty or (top == -1)
    return (stack_Array.top == -1); }

Stack::~Stack() {
    // free the allocated memory
    delete[] stack_Array.data; }
