#ifndef STACK_ARRAY
#define STACK_ARRAY

// The Max size of the array
#define MAX_SIZE 101

// struct to gather the data with the top tracker
struct Array_t {
    char * data;
    int top;
};


class Stack
{
    private:
        // Array and the tracker
        Array_t stack_Array;
    public:
        // Constructor
        Stack();

        // Push function, that put an element on top of the stack
        void Push(int);

        // Pop function, that remove the element on top of the stack
        void Pop();

        // isEmpty function, that checks whether the stack is empty on not
        bool isEmpty();

        // top function, return the element on top of the stack
        int Top();

        // Destructor
        ~Stack();
};

#endif
