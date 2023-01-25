#include <iostream>

#include "node.h"
#include "stack.h"

using std::cout;
using std::endl;

/*
    ToDo:
        Add destructor for Stack class!
*/

int main(int argc, char **argv) {
    Stack<int> my_stack;

    cout << "test empty stack:\n";
    cout << "my_stack.peek(): " << my_stack.peek() << endl;
    cout << "my_stack.pop(): " << my_stack.pop() << endl;

    cout << "test push to verify it working:\n";
    my_stack.push(42);
    cout << "my_stack.peek(): " << my_stack.peek() << endl;
    cout << "my_stack.pop(): " << my_stack.pop() << endl;

    cout << "test that pop actually does all the things it says it is going to\n";
    cout << "my_stack.pop(): " << my_stack.pop() << endl;

    cout << "test pushing two values on\n";
    my_stack.push(24);
    my_stack.push(25);
    cout << "my_stack.peek(): " << my_stack.peek() << endl;
    cout << "my_stack.pop(): " << my_stack.pop() << endl;
    cout << "my_stack.peek(): " << my_stack.peek() << endl;
    cout << "my_stack.pop(): " << my_stack.pop() << endl;
    cout << "my_stack.peek(): " << my_stack.peek() << endl;
    cout << "my_stack.pop(): " << my_stack.pop() << endl;

}
