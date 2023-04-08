#include <iostream>

class Node {
    public:
        int data;
        Node * next;
        Node * HEAD;
        void Insert(int x, int at)
        {
            Node * temp1 = new Node();
            temp1->data = x;
            temp1->next = NULL;
            if (at == 1)
            {
                temp1->next = HEAD;
                HEAD = temp1;
            }

            Node * temp2 = HEAD;
            for (int i = 0; i < at - 2; i++)
            {
                temp2 = temp2->next;
            }
            temp1->next = temp2->next;
            temp2->next = temp1;
        }

        void Print()
        {
            Node * temp = HEAD;
            
            while (temp->next != NULL)
            {
                temp = temp->next;
                std::cout << temp->data;
            }
        }
};

int main()
{
    Node node;
    node.HEAD = NULL;
    node.Insert(1, 1);
    node.Print();
    return (0);
}
