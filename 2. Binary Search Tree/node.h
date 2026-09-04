#pragma once

template<typename T>
struct node {
    T value;
    node<T> *left;
    node<T> *right;

    node(int value){
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }

    node(T value, node<T>* left, node<T>* right){
        this->value = value;
        this->left = left;
        this->right = right;
    }
};
