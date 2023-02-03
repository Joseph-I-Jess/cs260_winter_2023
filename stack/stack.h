#include "node.h"

/*
    ToDo:
        Fix pop and peek to use optional instead of returning -1!
        add a destructor member function!
*/

template <typename T>
class Stack {
    public:
        void push(T new_value) // O(1)
        {
            //create new node with value, point it to top.
            Node<T> *new_node = new Node<T>(new_value, top);
            top = new_node;
        }

        T pop() { // O(1)
            if(top == nullptr) {
                return -1;
            }
            // grab important values before they get deleted!
            T result = top->value;
            Node<T> *old_top = top;

            // update top variable of stack to be consistent with what we want the stack to look like when this function completes.
            top = top->next;

            // delete old top, we do not need it anymore.
            delete old_top;

            // return value pulled out of old_top.
            return result;
        }

        T peek() { // O(1)
            if(top == nullptr) { // O(1)
                return -1; // O(1)
            }

            return top->value; // O(1)
        }

        Stack() {
            top = nullptr;
        }

    private:
        Node<T> *top;
};
