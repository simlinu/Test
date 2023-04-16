#ifndef TREE_H
#define TREE_H

class Node {

    public:
        int val;
        Node * left;
        Node * right;

        Node();
        Node(int);
        
};

class Tree {

    private:
        void delTree(Node*&);
        void printTree(Node *);
    
    public:
        Node * root;

        Tree();
        Tree(Node*);
        Tree(int);
        ~Tree();

        void insertChild(Node *, int val);
        void print();

};

#endif
