#include "node.h"

/*
    ToDo:
        Fix pop and peek to use optional instead of returning -1!
*/

template <typename T>
class Stack {
    public:
        void push(T new_value)
        {
            //create new node with value, point it to top.
            Node<int> *new_node = new Node<int>(new_value, top);
            top = new_node;
        }

        T pop() {
            if(top == nullptr) {
                return -1;
            }
            // grab important values before they get deleted!
            int result = top->value;
            Node<int> *old_top = top;

            // update top variable of stack to be consistent with what we want the stack to look like when this function completes.
            top = top->next;

            // delete old top, we do not need it anymore.
            delete old_top;

            // return value pulled out of old_top.
            return result;
        }

        T peek() {
            if(top == nullptr) {
                return -1;
            }

            return top->value;
        }

        Stack() {
            top = nullptr;
        }

    private:
        Node<T> *top;
};
