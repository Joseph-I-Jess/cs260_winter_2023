#pragma once
#include "binaryTreeNode.h"

class BinarySearchTree {
public:
    BinarySearchTree();
    void insert(int value);
    bool find(int value);
    void remove(int value);
    void inorderTraversal();
    void preorderTraversal();
    void postorderTraversal();

private:
    BinaryTreeNode *root;

    BinaryTreeNode *insertHelper(BinaryTreeNode *node, int value);
    bool findHelper(BinaryTreeNode *node, int value);
    void removeHelper(BinaryTreeNode *&node, int value);
    BinaryTreeNode *findMin(BinaryTreeNode *node);
    void inorderTraversalHelper(BinaryTreeNode *node);
    void preorderTraversalHelper(BinaryTreeNode *node);
    void postorderTraversalHelper(BinaryTreeNode *node);
};
