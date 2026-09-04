#include <iostream>
#include "node.h"

int main() {
    Node<double> node(5);
    std::cout << node.value << std::endl;
}