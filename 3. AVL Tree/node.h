#pragma once

template<typename> 
struct node {
    T value;
    node<T>* left;
    node<T>* right;
    int height;

    node(T value) {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
        height = 1;
    }
}