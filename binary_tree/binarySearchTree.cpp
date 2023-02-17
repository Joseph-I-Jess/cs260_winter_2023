#include <iostream>

#include "binary_tree_node.h"

using std::cout;
using std::endl;

// class BinarySearchTree {
// public:
//     BinarySearchTree() {
//         root = nullptr;
//     }

//     ~BinarySearchTree() {
//         destroyTree(root);
//     }

//     void insert(int value) {
//         if (root == nullptr) {
//             root = new BinaryTreeNode{value, nullptr, nullptr};
//         } else {
//             insertHelper(root, value);
//         }
//     }

//     bool search(int value) {
//         return searchHelper(root, value);
//     }

//     void remove(int value) {
//         removeHelper(root, value);
//     }

// private:
//     BinaryTreeNode *root;

//     void destroyTree(BinaryTreeNode *node) {
//         if (node != nullptr) {
//             destroyTree(node->left);
//             destroyTree(node->right);
//             delete node;
//         }
//     }

//     void insertHelper(BinaryTreeNode *node, int value) {
//         if (value < node->value) {
//             if (node->left == nullptr) {
//                 node->left = new BinaryTreeNode{value, nullptr, nullptr};
//             } else {
//                 insertHelper(node->left, value);
//             }
//         } else {
//             if (node->right == nullptr) {
//                 node->right = new BinaryTreeNode{value, nullptr, nullptr};
//             } else {
//                 insertHelper(node->right, value);
//             }
//         }
//     }

//     bool searchHelper(BinaryTreeNode *node, int value) {
//         if (node == nullptr) {
//             return false;
//         } else if (value == node->value) {
//             return true;
//         } else if (value < node->value) {
//             return searchHelper(node->left, value);
//         } else {
//             return searchHelper(node->right, value);
//         }
//     }

//     void removeHelper(BinaryTreeNode *node, int value) {
//         if (node == nullptr) {
//             return;
//         }

//         if (value < node->value) {
//             removeHelper(node->left, value);
//         } else if (value > node->value) {
//             removeHelper(node->right, value);
//         } else {
//             // bug: does not update prent's pointer to node!
//             if (node->left == nullptr && node->right == nullptr) {
//                 delete node;
//                 node = nullptr;
//             } else if (node->left == nullptr) {
//                 BinaryTreeNode *temp = node;
//                 node = node->right;
//                 delete temp;
//             } else if (node->right == nullptr) {
//                 BinaryTreeNode *temp = node;
//                 node = node->left;
//                 delete temp;
//             } else {
//                 BinaryTreeNode *temp = findMin(node->right);
//                 node->value = temp->value;
//                 removeHelper(node->right, temp->value);
//             }
//         }
//     }

//     BinaryTreeNode *findMin(BinaryTreeNode *node) {
//         while (node->left != nullptr) {
//             node = node->left;
//         }
//         return node;
//     }
// };

// #include <iostream>

// using namespace std;

// struct BinaryTreeNode {
//     int value;
//     BinaryTreeNode *left;
//     BinaryTreeNode *right;
// };

class BinarySearchTree {
public:
    BinarySearchTree() {
        root = nullptr;
    }

    void insert(int value) {
        root = insertHelper(root, value);
    }

    bool find(int value) {
        return findHelper(root, value);
    }

    void remove(int value) {
        removeHelper(root, value);
    }

    void inorderTraversal() {
        inorderTraversalHelper(root);
    }

    void preorderTraversal() {
        preorderTraversalHelper(root);
    }

    void postorderTraversal() {
        postorderTraversalHelper(root);
    }

private:
    BinaryTreeNode *root;

    BinaryTreeNode *insertHelper(BinaryTreeNode *node, int value) {
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

    bool findHelper(BinaryTreeNode *node, int value) {
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

    void removeHelper(BinaryTreeNode *&node, int value) {
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

    BinaryTreeNode *findMin(BinaryTreeNode *node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    void inorderTraversalHelper(BinaryTreeNode *node) {
        if (node == nullptr) {
            return;
        }
        inorderTraversalHelper(node->left);
        cout << node->value << " ";
        inorderTraversalHelper(node->right);
    }

    void preorderTraversalHelper(BinaryTreeNode *node) {
        if (node == nullptr) {
            return;
        }
        cout << node->value << " ";
        preorderTraversalHelper(node->left);
        preorderTraversalHelper(node->right);
    }

    void postorderTraversalHelper(BinaryTreeNode *node) {
        if (node == nullptr) {
            return;
        }
        postorderTraversalHelper(node->left);
        postorderTraversalHelper(node->right);
        cout << node->value << " ";
    }
};

