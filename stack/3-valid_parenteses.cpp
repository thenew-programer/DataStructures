#include "1-stack_array.h"
#include <iostream>
#include <string>

/**
 * main - Checks for the balance of the parentheses of a string
 * using a stack data structure
 */

int main() {
    Stack stack;

    int i, n;
    std::string line;
    line = "{(hello) (wold [])}";
    n = line.length();
    for (i = 0; i < n; i++) {
        if ((line[i] == '(') || (line[i] == '{') || (line[i] == '[')) {
            stack.Push(line[i]);
        }
        else if ((line[i] == ')') || (line[i] == '}') || (line[i] == ']')) {
            if (stack.isEmpty()) {
                std::cout << "Parentheses not balanced\n";
                return (-1);
            }
            else if (line[i] != stack.Top()) {
                std::cout << "Unmatched Parentheses.\n";
                return (-1);
            }
            else {
                stack.Pop();
            }
        }
        else    continue;
    }
    if (stack.isEmpty())
        std::cout << "Balanced.\n";
    else
        std::cout << "Not Balanced.\n";
}
