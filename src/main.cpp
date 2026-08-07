#include <iostream>

void leakMemory();
void buggyFunction();

int main() {
    std::cout << "=== C++ utilities ===" << std::endl;

    leakMemory();
    buggyFunction();

    std::cout << "Done." << std::endl;
    return 0;
}