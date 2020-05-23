#include <iostream>
#include "Node.h"

/*

Implement below the downHeap procedure for a min heap.

Unlike the video lessons which demonstrated downHeap
implemented with an array implementation, this assignment
uses an ordinary binary tree with left and right child
pointers. This ordinary binary tree might not be complete
or balanced: any node might have only one child or the other,
or both, or neither.

Suppose you are given a tree where the left and right
subtrees are min heaps, but the root node does not
maintain the min heap property. Your code should
modify the tree rooted at Node* n so it is a min heap.
(This means you need to satisfy the min heap property:
it is okay for a node's value to be equal to one or both
of its children, but the node's value must not be greater
than either of its children. You do not have to try to
balance the tree or make it a complete tree.)

Tips:
If the root node exists, and if it has a left or right
child, and if one of the children has a smaller value
than the root node, then you should swap the root node
with the smaller child to move the large value down
into the tree. (This may need to be done recursively.)
Be careful to check whether pointers are null before
dereferencing them, as always; that includes using "->"
to access a class member through a pointer. In addition,
you must be careful not to accidentally compare "left"
and "right" pointers directly if you really intend to
compare the stored values "left->value" and "right->value".

Assume that these headers have already been included
for you:

#include <iostream>
#include <string>

You have the following class Node already defined.
You cannot change this class definition, so it is
shown here in a comment for your reference only:

class Node {
public:
  int value;
  Node *left, *right;
  Node(int val = 0) { value = val; left = right = nullptr; }
  ~Node() {
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
  }
};

This function has also previously been defined for you:

void printTreeVertical(const Node* n);

You can use it to print a verbose, vertical diagram of
a tree rooted at n. In this vertical format, a left child
is shown above a right child in the same column. If no
child exists, [null] is displayed.

*/

void downHeap(Node *n) {

    if (n -> left && n -> left -> value < n -> value) {
        int current = n -> value;
        int left = n -> left -> value;

        //std::cout << "Value: " << current << std::endl;
        //std::cout << "Left: " <<  n -> left -> value << std::endl;

        n -> value = left;
        n -> left -> value = current;

        //std::cout << "Swapped Value: " << n -> value << std::endl;
        //std::cout << "Swapped Left: " <<  n -> left -> value << std::endl;

        Node* leftNode = n -> left;
        downHeap(leftNode);
    }

    if (n -> right && n -> right -> value < n -> value) {
        int current = n -> value;
        int right = n -> right -> value;

        //std::cout << "Value: " << current << std::endl;
        //std::cout << "Right: " <<  n -> right -> value << std::endl;

        n -> value = right;
        n -> right -> value = current;

        //std::cout << "Swapped Value: " << n -> value << std::endl;
        //std::cout << "Swapped Right: " <<  n -> right -> value << std::endl;

        Node* rightNode = n -> right;
        downHeap(rightNode);
    }
}

// You can also use this compact printing function for debugging.
void printTree(Node *n) {
    if (!n) return;
    std::cout << n->value << "(";
    printTree(n->left);
    std::cout << ")(";
    printTree(n->right);
    std::cout << ")";
}

int main() {

    // Test #1

    Node *n = new Node(100);
    n->left = new Node(1);
    n->right = new Node(2);
    n->right->left = new Node(3);
    n->right->right = new Node(4);
    n->right->right->right = new Node(5);

    printTree(n);
    std::cout << "" << std::endl;
    downHeap(n);
    printTree(n);
    std::cout << "" << std::endl;

    delete n;
    n = nullptr;

    // Test #2

    Node *m = new Node(777);
    m->left = new Node(8);
    m->left->right = new Node(17);
    m->left->right->left = new Node(21);
    m->left->right->left->right = new Node(32);
    m->left->right->right = new Node(23);
    m->left->right->right->left = new Node(27);
    m->left->right->right->right = new Node(31);
    m->right = new Node(16);
    m->right->right = new Node(28);
    m->right->right->right = new Node(37);
    m->right->right->right->left = new Node(43);
    m->right->right->right->right = new Node(49);

    printTree(m);
    std::cout << "" << std::endl;
    downHeap(m);
    printTree(m);
    std::cout << "" << std::endl;

    delete m;
    m = nullptr;

    return 0;
}