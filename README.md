# Data Structures
I make this repo to practice data Structures concepts as well as C and CPP.
My goal here is to implement data Structures concepts in both language, and also using
different paradigms.

## Linked List

A linked list is a linear data structure, in which the elements are not stored at contiguous
memory locations. The elements in a linked list are linked using pointers as shown in
the below image.

![linked list representation](media/dsa_linkedlist.jpg)

- LinkedList contains elements called **Nodes**.
- Each Node carries a **data** field and a Link Field called **next**.
- Each Node is linked with anothe Node using its **next** link.
- Last Node carries a **next** as NULL to mark the end of the list.

#### Basic Operations

- **Append** - Add an Node at the beginning of the list.
- **Insert** - Add an Node at a given position position.
- **Print** - Print the entire list to stdout.
- **Delete** - Delete an Node at a given position.
- **DeleteValue** - Delete a Node that has the given value.
- **get** - Get the data of a node at given position.
- **(free)** - I use Free function only in C, to free the allocated memory in the program.

## Stack
A **stack** is an **abstract data type** with a predifined capacity or size. It is a simple
data structure that allows adding and removing elements in a particular order.

![simple representation of stack](media/lifo_stack.svg.png)

#### Basic Features
- 1-Stack is an **ordered list** of similar data type.
- 2-Stack is a **LIFO**(Last in First out) structure.
- 3-**push()** function is used to insert new element into the stack.
- 4-**pop()** function is used to remove an element from the stack.
    _Both insertion and deletion are allowed only on top of the stack_
- 5-Stack is in **Overflow** state when it is completely full, and is said in 
  **Underflow** state if it is completely empty.
