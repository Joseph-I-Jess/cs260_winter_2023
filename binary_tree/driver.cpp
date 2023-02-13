// #include <cstdio> // not needed on some systems...
#include <iostream>

#include "binary_tree_node.h"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
    BinaryTreeNode root{42, nullptr, nullptr};
    BinaryTreeNode left{21, nullptr, nullptr};
    BinaryTreeNode right{63, nullptr, nullptr};

    root.left = &left;
    root.right = &right;

    BinaryTreeNode ll{10, nullptr, nullptr};
    BinaryTreeNode lr{30, nullptr, nullptr};
    BinaryTreeNode rl{50, nullptr, nullptr};
    BinaryTreeNode rr{70, nullptr, nullptr};

    root.left->left = &ll;
    root.left->right = &lr;
    root.right->left = &rl;
    root.right->right = &rr;

    // print root values
    // cout << "root: {" << root.value << ", " << root.left << ", " << root.right << "}" << endl;
    printf("root: {%d, %#X, %#X}\n", root.value, root.left, root.right);

    // print root's children's values
    printf("root.left: {%d, %#X, %#X}\n", root.left->value, root.left->left, root.left->right);
    printf("root.right: {%d, %#X, %#X}\n", root.right->value, root.right->left, root.right->right);

    printf("root.left->left: {%d, %#X, %#X}\n", root.left->left->value, root.left->left->left, root.left->left->right);
    printf("root.left->right: {%d, %#X, %#X}\n", root.left->right->value, root.left->right->left, root.left->right->right);
    printf("root.right->left: {%d, %#X, %#X}\n", root.right->left->value, root.right->left->left, root.right->left->right);
    printf("root.right->right: {%d, %#X, %#X}\n", root.right->right->value, root.right->right->left, root.right->right->right);

    return 0;
}
