/*
Node class represents a link in a linked list,
    contains a value and a pointer to the next Node in the list.
*/
class Node {
    public:
        int value;
        Node *next;

        Node() {}
        Node(int new_value, Node *new_next) {
            this->value = new_value;
            this->next = new_next;
        }

        //add value to list as node Member Functioun
        // void add(int value) {
        //     //do stuff
        // }

        //maybe get and set functions for value or next

    private:
        // int position_in_list;

        // encryption key

};