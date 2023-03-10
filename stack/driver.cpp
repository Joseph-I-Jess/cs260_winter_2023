#include <iostream>
#include <string>
#include <vector>

#include "node.h"
#include "stack.h"

using std::cout;
using std::endl;
using std::vector;

/*
    ToDo:
        Add destructor for Stack class!
*/

int main(int argc, char **argv) {
    // Stack<int> my_stack; //O(1)

    // cout << "test empty stack:\n"; // O(1)
    // cout << "my_stack.peek(): " << my_stack.peek() << endl; // O(1)
    // cout << "my_stack.pop(): " << my_stack.pop() << endl; // O(1)

    // cout << "test push to verify it working:\n"; // O(1)
    // my_stack.push(42); // O(1)
    // cout << "my_stack.peek(): " << my_stack.peek() << endl; // O(1)
    // cout << "my_stack.pop(): " << my_stack.pop() << endl; // O(1)

    // cout << "test that pop actually does all the things it says it is going to\n"; // O(1)
    // cout << "my_stack.pop(): " << my_stack.pop() << endl; // O(1)

    // cout << "test pushing two values on\n"; // O(1)
    // my_stack.push(24); // O(1)
    // my_stack.push(25); // O(1)
    // cout << "my_stack.peek(): " << my_stack.peek() << endl; // O(1)
    // cout << "my_stack.pop(): " << my_stack.pop() << endl; // O(1)
    // cout << "my_stack.peek(): " << my_stack.peek() << endl; // O(1)
    // cout << "my_stack.pop(): " << my_stack.pop() << endl; // O(1)
    // cout << "my_stack.peek(): " << my_stack.peek() << endl; // O(1)
    // cout << "my_stack.pop(): " << my_stack.pop() << endl; // O(1)

    // Stack<std::string> string_stack;

    // Crashes because of -1 return rather than data type of the template...
    // cout << "string_stack.peek(): " << string_stack.peek() << endl;

    vector<double> my_space;
    my_space.push_back(3.13);
    cout << "my_space.back(): " << my_space.back() << endl;
    // my_space.pop_back();
    // cout << "my_space.back(): " << my_space.back() << endl;
    my_space.push_back(3.14);
    my_space.push_back(3.15);
    my_space.push_back(3.16);

    //create an iterator that will walk through the vector's elements
    vector<double>::iterator iter;

    //loop over elements in vector from begin to end (exclusive of end...)
    for(iter = my_space.begin(); iter < my_space.end(); ++iter) {
        cout << "*iter: " << *iter << endl;
    }
}
