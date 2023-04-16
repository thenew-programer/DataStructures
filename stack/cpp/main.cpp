#include "1-stack_array.h"
#include <iostream>


int main() {
    Stack s;
    s.Push(-21);
    s.Push(10);
    s.Push(-4);
    s.Push(17);
    s.Push(13);
    s.Push(28);
    s.Push(32);
    s.Push(33);
    for (int i = 0; i < 8; i++) {
        std::cout << s.Top() << "\n";
        s.Pop();
    }
    s.Pop();
    if (s.isEmpty()) {
        std::cout << "This shit is working...\n";
        return (0); }
    else {
        std::cout << "This shit isn't working...\n";
        return (-1); }

}
