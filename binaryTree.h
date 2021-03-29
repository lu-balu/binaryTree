#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <string>

class Node {
public:
    int data;
    Node *leftNode;
    Node *rightNode;
};

class Tree{
public:
    Tree() : p(nullptr), symbol("") {}

    void push(int newData);
    void print();

private:
    Node* p;
    std::string symbol;
    void recursivePrint(Node* currNode);

};

#endif //BINARYTREE_H 