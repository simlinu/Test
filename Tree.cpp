#include <iostream>
#include "Tree.h"
using namespace std;

// Node Class

Node::Node() {
    val = 0;
    left = nullptr;
    right = nullptr;
}

Node::Node(int _val) {
    val = _val;
    left = nullptr;
    right = nullptr;
}


// Tree Class

// Constructors

Tree::Tree() {
   root = nullptr; 
}

Tree::Tree(int val) {
    root = new Node(val);
}

Tree::Tree(Node * _root) {
    root = _root;
} 

Tree::~Tree() {
    delTree(root);
}


// Public Methods

void Tree::insertChild(Node * father, int val) {

    if (!father) return;
    if (!father->left) {
        father->left = new Node(val);
        return;
    }
    
    Node * son = father->left;
    for (; son->right != nullptr; son = son->right);
    son->right = new Node(val);

}

void Tree::print() {
    printTree(root);
    cout << endl;
}


// Private Methods

void Tree::delTree(Node * &node) {
    
    if (!node) return;
    delTree(node->left);
    delTree(node->right);
    delete node;

}

void Tree::printTree(Node * node) {

    if (!node) return;
    cout << node->val << " ";
    printTree(node->left);
    printTree(node->right);

}

