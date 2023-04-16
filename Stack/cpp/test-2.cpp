#include "2-stack_ll.h"
#include <iostream>

int main() {
    Stack_ll s_list;
    s_list.Push(1);
    s_list.Push(2);
    s_list.Push(3);
    s_list.Push(4);
    s_list.Push(5);
    s_list.Push(6);
    s_list.Push(7);
    s_list.Push(8);
    for (int i = 8; i > 0; i--) {
        std::cout << "Element [" << i << "] = " << s_list.Top() << "\n";
        s_list.Pop();
    }
    return (0);
}
