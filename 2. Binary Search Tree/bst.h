
#pragma once

#include "node.h"
#include <iostream>

template<typename T>
class binary_search_tree{
private:
    node<T> *root;

    node<T>* insert(node<T> *_node, T value){
        if(_node == nullptr){
            return new node<T>(value);
        }
        if(value < _node->value){
            _node->left = insert(_node->left, value);
        } else {
            _node->right = insert(_node->right, value);
        }
        return _node;
    }

    void inorder_traversal(node<T>* _node){
        if(_node == nullptr){
            return;
        }
        inorder_traversal(_node->left);
        std::cout << _node->value << " ";
        inorder_traversal(_node->right);
    }

public:

    binary_search_tree(): root(nullptr) {}

    void insert(T value){
        root = insert(root, value);
    }

    void inorder_traversal(){
        inorder_traversal(root);
    }
};