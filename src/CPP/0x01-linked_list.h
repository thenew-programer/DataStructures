#ifndef LL_H
#define LL_H

class List {
    private: 
        typedef struct Node
        {
            int data;
            Node * next;
        }* nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;
    public:
        /* Constructor of this class*/
        List();

        /* add a node to the list*/
        void Append(int Indata);

        /* Delete a node from the list*/
        void Delete(int Deldata);

        /* Print all the list */
        void Print();
};
#endif
