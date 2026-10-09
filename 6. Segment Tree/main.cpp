
#include <iostream>
#include <vector>

int main() {
    std::cout << "Hello\n";
    std::vector<int> v1 = {2,3,42,1,2,3};
    for(auto v: v1){
        std::cout << v << " ";
    }
    std::cout << std::endl;
}З