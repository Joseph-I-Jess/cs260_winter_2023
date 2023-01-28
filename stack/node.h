#pragma once
/*
Node class represents a link in a linked list,
    contains a value and a pointer to the next Node in the list.
*/
template <typename T>
struct Node {
    T value;
    Node *next;

    Node() {}
    Node(T new_value, Node *new_next) {
        this->value = new_value;
        this->next = new_next;
    }
};