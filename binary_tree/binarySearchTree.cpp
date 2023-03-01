#include <iostream>

#include "binaryTreeNode.h"
#include "binarySearchTree.h"

using std::cout;
using std::endl;

BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

void BinarySearchTree::insert(int value) {
    root = insertHelper(root, value);
}

bool BinarySearchTree::find(int value) {
    return findHelper(root, value);
}

void BinarySearchTree::remove(int value) {
    removeHelper(root, value);
}

void BinarySearchTree::inorderTraversal() {
    inorderTraversalHelper(root);
}

void BinarySearchTree::preorderTraversal() {
    preorderTraversalHelper(root);
}

void BinarySearchTree::postorderTraversal() {
    postorderTraversalHelper(root);
}

BinaryTreeNode *BinarySearchTree::insertHelper(BinaryTreeNode *node, int value) {
    if (node == nullptr) {
        node = new BinaryTreeNode;
        node->value = value;
        node->left = nullptr;
        node->right = nullptr;
    } else if (value < node->value) {
        node->left = insertHelper(node->left, value);
    } else if (value > node->value) {
        node->right = insertHelper(node->right, value);
    }
    return node;
}

bool BinarySearchTree::findHelper(BinaryTreeNode *node, int value) {
    if (node == nullptr) {
        return false;
    }
    if (node->value == value) {
        return true;
    } else if (value < node->value) {
        return findHelper(node->left, value);
    } else {
        return findHelper(node->right, value);
    }
}

void BinarySearchTree::removeHelper(BinaryTreeNode *&node, int value) {
    if (node == nullptr) {
        return;
    }
    if (value < node->value) {
        removeHelper(node->left, value);
    } else if (value > node->value) {
        removeHelper(node->right, value);
    } else {
        if (node->left == nullptr) {
            BinaryTreeNode *temp = node->right;
            delete node;
            node = temp;
        } else if (node->right == nullptr) {
            BinaryTreeNode *temp = node->left;
            delete node;
            node = temp;
        } else {
            BinaryTreeNode *temp = findMin(node->right);
            node->value = temp->value;
            removeHelper(node->right, temp->value);
        }
    }
}

BinaryTreeNode *BinarySearchTree::findMin(BinaryTreeNode *node) {
    while (node->left != nullptr) {
        node = node->left;
    }
    return node;
}

void BinarySearchTree::inorderTraversalHelper(BinaryTreeNode *node) {
    if (node == nullptr) {
        return;
    }
    inorderTraversalHelper(node->left);
    cout << node->value << " ";
    inorderTraversalHelper(node->right);
}

void BinarySearchTree::preorderTraversalHelper(BinaryTreeNode *node) {
    if (node == nullptr) {
        return;
    }
    cout << node->value << " ";
    preorderTraversalHelper(node->left);
    preorderTraversalHelper(node->right);
}

void BinarySearchTree::postorderTraversalHelper(BinaryTreeNode *node) {
    if (node == nullptr) {
        return;
    }
    postorderTraversalHelper(node->left);
    postorderTraversalHelper(node->right);
    cout << node->value << " ";
}
