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

        /* Append - add a node at the end of the list
         * value: the value to append
         * Return - void
         */
        void Append(int value);

        /* Append - Add a node at the index position
         * index - start from 0.
         * value: the value you want to append in the list.
         * if index > number of elements of the list,
         *   the value inserted to the end of the list.
         */
        void Insert(int value, int index);

        /* get the data of the node at the index position.
         * index: the position of the node.
         * fail:  the value you want in Return, in case
         * of failure.
         * Return: the value at the index, otherwise @fail
         */
        int get(int index, int fail);

        /* Delete - Delete a node at index position
         * index: the position of the desired node.
         * Return: Void
         */
        void Delete(int index);

        /* DeleteNode - delete a node from the list, using the value
         * value: the value you want to delete from the list.
         * Return: Void
         */
        void DeleteValue(int value);

        /* Print all the list */
        void Print();
};
#endif
