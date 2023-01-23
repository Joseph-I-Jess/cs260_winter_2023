#include <iostream>

#include "node.cpp"

using std::cout;
using std::endl;

Node *push(int new_value, Node *parent) {
    //create new node with value, point it to parent and return pointer to new object.
    Node *new_node = new Node(new_value, parent);
    return new_node;
}

Node *pop(Node *parent) {
    if(parent == nullptr) {
        return nullptr;
    }
    
    Node *next = parent->next;
    delete parent;
    return next;
}

int main(int argc, char **argv) {
    Node top(42, nullptr);
    Node tail(24, nullptr);
    Node *head_ptr = &top;

    // cout << "top.value: " << top.value << endl;
    cout << "top.next: " << top.next << endl;
    // cout << "tail.value: " << tail.value << endl;
    // cout << "tail.next: " << tail.next << endl;

    top.next = &tail;

    // cout << "top.value: " << top.value << endl;
    cout << "top.next: " << top.next << endl;
    // cout << "tail.value: " << tail.value << endl;
    cout << "&tail: " << &tail << endl;
    // cout << "tail.next: " << tail.next << endl;

    cout << "top.next->value: " << top.next->value << endl;
    cout << "head_ptr->next->value: " << head_ptr->next->value << endl;

    cout << "&head_ptr: " << &head_ptr << endl;
    cout << "head_ptr: " << head_ptr << endl;

    head_ptr = push(10, head_ptr);

    cout << "&head_ptr: " << &head_ptr << endl;
    cout << "head_ptr: " << head_ptr << endl;
    cout << "head_ptr->value: " << head_ptr->value << endl << endl;

    head_ptr = pop(head_ptr);

    cout << "&head_ptr: " << &head_ptr << endl;
    cout << "head_ptr: " << head_ptr << endl;
    cout << "head_ptr->value: " << head_ptr->value << endl << endl;

    head_ptr = pop(head_ptr);

    cout << "&head_ptr: " << &head_ptr << endl;
    cout << "head_ptr: " << head_ptr << endl;
    cout << "head_ptr->value: " << head_ptr->value << endl << endl;

    head_ptr = pop(head_ptr);

    cout << "&head_ptr: " << &head_ptr << endl;
    cout << "head_ptr: " << head_ptr << endl;
    cout << "head_ptr->value: " << head_ptr->value << endl << endl;
}