#ifndef STACK_LL
#define STACK_LL

typedef struct Node {
    char data;
    Node * next;
} * nodePtr;

class Stack_ll {
    private:
        nodePtr top;
    public:
        // Constructor
        Stack_ll();

        // Push method that add an element to the list
        void Push(int);

        // Pop method that removes an element from the top of the list
        void Pop();

        // Top method that get the element in the top of the list
        int Top();

        // Destructor
        ~Stack_ll();
};
#endif
