#include <iostream>

#include "binaryTreeNode.h"
#include "binarySearchTree.h"

using std::cout;
using std::endl;

void inOrderTraversal(BinaryTreeNode *current) {
    //inOrderTraversal of left child, if it exists
    if(current->left != nullptr) {
        inOrderTraversal(current->left);
    }
    //print value of self
    cout << current->value << ", ";
    //inOrderTraversal of right child, if it exists
    if(current->right != nullptr) {
        inOrderTraversal(current->right);
    }
}

int main(int argc, char **argv) {
    BinarySearchTree bst;
    BinaryTreeNode newNode{42, nullptr, nullptr};

    bst.insert(0);
    bst.insert(32);
    bst.insert(16);
    bst.insert(-5);
    bst.insert(-6);
    bst.insert(-4);
    bst.insert(64);
    bst.insert(64);

    // check if search works on present and absent values?
    cout << "-6 in bst? " << bst.find(-6) << endl;
    cout << "-7 in bst? " << bst.find(-7) << endl;
    cout << "99 in bst? " << bst.find(99) << endl;

    // remove a value and see if it was removed
    bst.remove(-6);
    cout << "-6 in bst? " << bst.find(-6) << endl;

    cout << "__cplusplus (the standard that is being used in my compiler): " << __cplusplus << endl;

    return 0;
}
