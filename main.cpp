#include <iostream>
#include "Tree.h"
#include "solution.h"
using namespace std;


int main() {
    

    // Test 1
    Tree tree(1);
    tree.insertChild(tree.root, 2);
    tree.insertChild(tree.root, 3);
    tree.insertChild(tree.root, 4);
    tree.insertChild(tree.root->left, 5);
    tree.insertChild(tree.root->left, 6);
    tree.insertChild(tree.root->left, 7);
    tree.insertChild(tree.root->left->right, 8);

    solution(tree.root);
    tree.print();


    // Test 2
    Tree tree1(1);
    tree1.insertChild(tree1.root, 2);
    tree1.insertChild(tree1.root, 3);
    tree1.insertChild(tree1.root, 4);

    solution(tree1.root);
    tree1.print();
    
    return 0;

}
