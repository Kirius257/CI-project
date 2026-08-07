#include <iostream>
#include <vector>

void buggyFunction() {
    std::cout << "Buggy function..." << std::endl;

    std::vector<int> v = {1, 2, 3, 4, 5};
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    int unused = 42;
}