// #include <cstdio> // not needed on some systems...
#include <iostream>

//#include "binary_tree_node.h"
#include "binarySearchTree.cpp" // poor practice 🙁

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
    // BinaryTreeNode root{42, nullptr, nullptr};
    // BinaryTreeNode left{21, nullptr, nullptr};
    // BinaryTreeNode right{63, nullptr, nullptr};

    // root.left = &left;
    // root.right = &right;

    // BinaryTreeNode ll{10, nullptr, nullptr};
    // BinaryTreeNode lr{30, nullptr, nullptr};
    // BinaryTreeNode rl{50, nullptr, nullptr};
    // BinaryTreeNode rr{70, nullptr, nullptr};

    // root.left->left = &ll;
    // root.left->right = &lr;
    // root.right->left = &rl;
    // root.right->right = &rr;

    // // print root values
    // // cout << "root: {" << root.value << ", " << root.left << ", " << root.right << "}" << endl;
    // printf("root: {%d, %#X, %#X}\n", root.value, root.left, root.right);

    // // print root's children's values
    // printf("root.left: {%d, %#X, %#X}\n", root.left->value, root.left->left, root.left->right);
    // printf("root.right: {%d, %#X, %#X}\n", root.right->value, root.right->left, root.right->right);

    // printf("root.left->left: {%d, %#X, %#X}\n", root.left->left->value, root.left->left->left, root.left->left->right);
    // printf("root.left->right: {%d, %#X, %#X}\n", root.left->right->value, root.left->right->left, root.left->right->right);
    // printf("root.right->left: {%d, %#X, %#X}\n", root.right->left->value, root.right->left->left, root.right->left->right);
    // printf("root.right->right: {%d, %#X, %#X}\n", root.right->right->value, root.right->right->left, root.right->right->right);

    // inOrderTraversal(&root);

    BinarySearchTree bst;

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

    return 0;
}
