#include "binaryTree.h"
#include <iostream>

void Tree::push(int newData){
    // Создание Ноды
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->leftNode = nullptr;
    newNode->rightNode = nullptr;

    // Добавление первой Ноды
    if(p == nullptr){
        p = newNode;
        return;
    }

    // Добавление последующих Нод
    Node* currNode = p;
    bool found = false;
    while(!found){
        if(newData <= currNode->data){
            if(currNode->leftNode == nullptr){
                currNode->leftNode = newNode;
                found = true;
            }
            else{
                currNode = currNode->leftNode;
            }
        }
        else{
            if(currNode->rightNode == nullptr){
                currNode->rightNode = newNode;
                found = true;
            }
            else{
                currNode = currNode->rightNode;
            }
        }
    }
}
 
// Вызов рекурсивной функции, выводящей информацию на экран
void Tree::print(){
    Node* currNode = p;
    recursivePrint(currNode);
}

// Вывод информации на экран. Функция вызывает себя же для левой и правой ноды.
void Tree::recursivePrint(Node* currNode){
    if(currNode == nullptr){
        return;
    }
    else{
        std::cout << symbol << currNode->data << std::endl;
        std::string addSymbol("-");
        symbol.append(addSymbol);
        recursivePrint(currNode->leftNode);
        recursivePrint(currNode->rightNode);
        
    }
    symbol.erase(1, 1);
}

    
