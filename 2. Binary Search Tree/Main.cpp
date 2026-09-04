#include <iostream>
#include "bst.h"

int main() {
    binary_search_tree<int> bst1;
    bst1.insert(3);
    bst1.insert(5);
    bst1.insert(1);
    bst1.insert(4);
    std::cout << "inorder traversal: " << std::endl;
    bst1.inorder_traversal();
    std::cout << std::endl;
}