#include <iostream>
#include "Node.h"

/********************************************************
You may assume that the following Node class has already
been defined for you previously:

class Node {
public:
  Node *left, *right;
  Node() { left = right = nullptr; }
  ~Node() {
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
  }
};

You may also assume that iostream has already been included.

Implement the function "int count(Node *n)" below to return
an integer representing the number of nodes in the subtree
of Node n (including Node n itself).

*********************************************************/

int inner(int count, Node *n) {
    int left = 0;
    int right = 0;

    if (n->left) {
        left = inner(count, n->left);
    }

    if (n->right) {
        right = inner(count, n->right);
    }

    return count + left + right;
}

int count(Node *n) {

    // Start at 1 for root itself, can start at arbitrary key
    int count = 1;
    int left = 0;
    int right = 0;

    if (n->left) {
        left = inner(count, n->left);
    }

    if (n->right) {
        right = inner(count, n->right);
    }

    return count + left + right;
}

int main() {
    Node *n = new Node();
    n->left = new Node();
    n->right = new Node();
    n->right->left = new Node();
    n->right->right = new Node();
    n->right->right->right = new Node();

    // This should print a count of six nodes
    std::cout << count(n) << std::endl;

    //--------------------------------------------//
    // Extra Tests - added by me

    n->right->right->right->right = new Node();
    n->right->right->right->left = new Node();

    // This should print a count of eight nodes
    std::cout << count(n) << std::endl;

    n->right->left->left= new Node();
    n->right->right->right->right->right = new Node();
    n->right->right->right->left->left = new Node();

    // This should print a count of eleven nodes
    std::cout << count(n) << std::endl;

    //--------------------------------------------//

    // Deleting n is sufficient to delete the entire tree
    // because this will trigger the recursively-defined
    // destructor of the Node class.
    delete n;
    n = nullptr;

    return 0;
}