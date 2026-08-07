#include <iostream>

void leakMemory() {
    std::cout << "Leaking memory..." << std::endl;
    int *arr = new int[100];
}